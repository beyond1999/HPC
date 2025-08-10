# NV技术栈（高性能计算、异构计算工程师）：

### cuda

1. reduce\softmax \rms norm\Transpose
2. bank conflict\roofline分析、fusion\tiling策略
3. flash attention v1 v2 v3
4. naive softmax -> FA1 FA2 FA3
5. CUDA-> PTX -> SASS
6. cuda-learn-notes

### cutlass

1. tensorcore\cute\swizzle\ldmatrix
2. sgemm\sgemv\hgemm\hgemv
3. hopper:TMA\wgmma\fp8
4. mma\wmma\wgmma

学知乎reed

### cublas

### cudnn

IR图优化：模型转换 capture 切图 fusion tiling pass 整图 类cuda graph 或者胆酸子下发 调度 动转静等等

### Profiler工具

- Nsight System（Nsys profile）
- Nsight Compute(ncu)

### 内存层级

Host mem -> HBM -> reg\ L1 -> HBM-> host mem

# AI、大模型推理引擎工程师

### AI推理引擎

TNN

MNN

TensorRT

CANN

Mindspore

Kuiperinfer

工具Netron

### 大模型推理引擎

vllm 为什么会有高吞吐 减少碎片化内存 paged attention 连续批处理 orca continuous batch

Trt-llm

量化方法 Smooth Quant w8a8  AWQ 量化反量化算子是怎么实现的 有了trt为什么会再写一个trt-LLM



sglang

DSL、流式返回、优先级调度、KV跨rg的管理

llama.cpp

kuiperllama

### 机器学习引擎