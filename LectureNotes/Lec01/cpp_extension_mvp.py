from torch.utils.cpp_extension import load_inline
import torch, shutil, os

build_dir = os.path.abspath("./build_my_module")
shutil.rmtree(build_dir, ignore_errors=True)
os.makedirs(build_dir, exist_ok=True)
# 禁用 ninja
os.environ["TORCH_CUDA_USE_NINJA"] = "0"

# 本地短目录，避免长路径
build_dir = os.path.abspath("./build_my_module")
shutil.rmtree(build_dir, ignore_errors=True)

src = r'''
#include <torch/extension.h>
#include <string>
std::string hello_world(){ return "Hello World!"; }
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m){
    m.def("hello_world", &hello_world, "hello world");
}
'''

mod = load_inline(
    name="my_module",
    cpp_sources=[src],
    extra_cflags=["/std:c++17", "/EHsc", "/utf-8"],
    build_directory=build_dir,
    verbose=True,
)

print(mod.hello_world())
