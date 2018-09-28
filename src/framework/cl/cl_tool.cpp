/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include "cl_tool.h"

namespace paddle_mobile {
namespace framework {

const char *opencl_error_to_str(cl_int error) {
#define CASE_CL_CONSTANT(NAME) case NAME: return #NAME;
  // Suppose that no combinations are possible.
  switch (error) {
    CASE_CL_CONSTANT(CL_SUCCESS)
    CASE_CL_CONSTANT(CL_DEVICE_NOT_FOUND)
    CASE_CL_CONSTANT(CL_DEVICE_NOT_AVAILABLE)
    CASE_CL_CONSTANT(CL_COMPILER_NOT_AVAILABLE)
    CASE_CL_CONSTANT(CL_MEM_OBJECT_ALLOCATION_FAILURE)
    CASE_CL_CONSTANT(CL_OUT_OF_RESOURCES)
    CASE_CL_CONSTANT(CL_OUT_OF_HOST_MEMORY)
    CASE_CL_CONSTANT(CL_PROFILING_INFO_NOT_AVAILABLE)
    CASE_CL_CONSTANT(CL_MEM_COPY_OVERLAP)
    CASE_CL_CONSTANT(CL_IMAGE_FORMAT_MISMATCH)
    CASE_CL_CONSTANT(CL_IMAGE_FORMAT_NOT_SUPPORTED)
    CASE_CL_CONSTANT(CL_BUILD_PROGRAM_FAILURE)
    CASE_CL_CONSTANT(CL_MAP_FAILURE)
    CASE_CL_CONSTANT(CL_MISALIGNED_SUB_BUFFER_OFFSET)
    CASE_CL_CONSTANT(CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST)
    CASE_CL_CONSTANT(CL_INVALID_VALUE)
    CASE_CL_CONSTANT(CL_INVALID_DEVICE_TYPE)
    CASE_CL_CONSTANT(CL_INVALID_PLATFORM)
    CASE_CL_CONSTANT(CL_INVALID_DEVICE)
    CASE_CL_CONSTANT(CL_INVALID_CONTEXT)
    CASE_CL_CONSTANT(CL_INVALID_QUEUE_PROPERTIES)
    CASE_CL_CONSTANT(CL_INVALID_COMMAND_QUEUE)
    CASE_CL_CONSTANT(CL_INVALID_HOST_PTR)
    CASE_CL_CONSTANT(CL_INVALID_MEM_OBJECT)
    CASE_CL_CONSTANT(CL_INVALID_IMAGE_FORMAT_DESCRIPTOR)
    CASE_CL_CONSTANT(CL_INVALID_IMAGE_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_SAMPLER)
    CASE_CL_CONSTANT(CL_INVALID_BINARY)
    CASE_CL_CONSTANT(CL_INVALID_BUILD_OPTIONS)
    CASE_CL_CONSTANT(CL_INVALID_PROGRAM)
    CASE_CL_CONSTANT(CL_INVALID_PROGRAM_EXECUTABLE)
    CASE_CL_CONSTANT(CL_INVALID_KERNEL_NAME)
    CASE_CL_CONSTANT(CL_INVALID_KERNEL_DEFINITION)
    CASE_CL_CONSTANT(CL_INVALID_KERNEL)
    CASE_CL_CONSTANT(CL_INVALID_ARG_INDEX)
    CASE_CL_CONSTANT(CL_INVALID_ARG_VALUE)
    CASE_CL_CONSTANT(CL_INVALID_ARG_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_KERNEL_ARGS)
    CASE_CL_CONSTANT(CL_INVALID_WORK_DIMENSION)
    CASE_CL_CONSTANT(CL_INVALID_WORK_GROUP_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_WORK_ITEM_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_GLOBAL_OFFSET)
    CASE_CL_CONSTANT(CL_INVALID_EVENT_WAIT_LIST)
    CASE_CL_CONSTANT(CL_INVALID_EVENT)
    CASE_CL_CONSTANT(CL_INVALID_OPERATION)
    CASE_CL_CONSTANT(CL_INVALID_GL_OBJECT)
    CASE_CL_CONSTANT(CL_INVALID_BUFFER_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_MIP_LEVEL)
    CASE_CL_CONSTANT(CL_INVALID_GLOBAL_WORK_SIZE)
    CASE_CL_CONSTANT(CL_INVALID_PROPERTY)

    default:
      return "UNKNOWN ERROR CODE";
  }
#undef CASE_CL_CONSTANT
}

}
}
