#
# Copyright (C) 2017-2021 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

set(IGDRCL_SRCS_tests_gtpin
    ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
    ${CMAKE_CURRENT_SOURCE_DIR}/gtpin_tests.cpp
)
macro(macro_for_each_gen)
  foreach(BRANCH_DIR ${BRANCH_DIR_LIST})
    if(EXISTS ${NEO_SOURCE_DIR}/opencl/source${BRANCH_DIR}${GEN_TYPE_LOWER}/gtpin_setup_${GEN_TYPE_LOWER}.cpp)
      list(APPEND IGDRCL_SRCS_tests_gtpin ${NEO_SOURCE_DIR}/opencl/source${BRANCH_DIR}${GEN_TYPE_LOWER}/gtpin_setup_${GEN_TYPE_LOWER}.cpp)
    endif()
  endforeach()
endmacro()
apply_macro_for_each_gen("TESTED")
if(NOT DISABLED_GTPIN_SUPPORT)
  target_sources(igdrcl_tests PRIVATE ${IGDRCL_SRCS_tests_gtpin})
endif()
add_subdirectories()
