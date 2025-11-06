import torch
import torch.profiler

b = torch.randn(10000, 10000).cuda()

def square_2(a):
    return a * a

def square_3(a):
    return a ** 2

# with torch.profiler.profile(
#     activities=[
#         torch.profiler.ProfilerActivity.CPU,
#         torch.profiler.ProfilerActivity.CUDA],
#     record_shapes=True,
#     profile_memory=True
# ) as prof:
#     torch.square(b)
#     square_2(b)
#     square_3(b)
#
# print(prof.key_averages().table(sort_by="cuda_time_total", row_limit=10))


with torch.profiler.profile(
    activities=[torch.profiler.ProfilerActivity.CPU, torch.profiler.ProfilerActivity.CUDA],
    record_shapes=True, profile_memory=True
) as prof:
    with torch.autograd.profiler.record_function("op_square"):
        torch.square(b)
    with torch.autograd.profiler.record_function("op_mul"):
        (b * b)
    with torch.autograd.profiler.record_function("op_pow"):
        (b ** 2)

print(prof.key_averages(group_by_input_shape=False).table(sort_by="cuda_time_total", row_limit=50))
