function(lite_fbs_library TARGET)
  set(multiValueArgs SRCS FBS_DEPS)
  cmake_parse_arguments(args "" "" "${multiValueArgs}" ${ARGN})
  lite_cc_library(${TARGET} SRCS ${args_SRCS})
  add_dependencies(${TARGET} ${args_FBS_DEPS})
endfunction()

lite_fbs_library(fbs_op_desc SRCS op_desc.cc FBS_DEPS fbs_headers)
lite_fbs_library(fbs_var_desc SRCS var_desc.cc FBS_DEPS fbs_headers)
lite_fbs_library(fbs_block_desc SRCS block_desc.cc FBS_DEPS fbs_headers)
lite_cc_library(fbs_program_desc SRCS program_desc.cc DEPS fbs_op_desc fbs_var_desc fbs_block_desc)
lite_fbs_library(fbs_param_desc SRCS param_desc.cc FBS_DEPS fbs_headers)
lite_cc_library(fbs_io SRCS io.cc DEPS fbs_program_desc fbs_param_desc scope)
lite_cc_test(test_vector_view SRCS vector_view_test.cc DEPS fbs_program_desc)
lite_cc_test(test_fbs_io SRCS io_test.cc DEPS fbs_io)
