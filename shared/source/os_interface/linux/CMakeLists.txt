#
# Copyright (C) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: MIT
#

set(NEO_CORE_OS_INTERFACE_LINUX
    ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt
    ${CMAKE_CURRENT_SOURCE_DIR}/allocator_helper.h
    ${CMAKE_CURRENT_SOURCE_DIR}/cache_info.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/cache_info_impl.h
    ${CMAKE_CURRENT_SOURCE_DIR}/driver_info_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/driver_info_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_allocation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_allocation.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_allocation_extended.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_buffer_object.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_buffer_object.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_buffer_object_extended.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_debug.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_gem_close_worker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_gem_close_worker.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_manager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_manager.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_engine_mapper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_engine_mapper.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_neo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_neo.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_null_device.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_operations_handler.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_operations_handler_bind.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_operations_handler_bind.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_operations_handler_default.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_operations_handler_default.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_memory_operations_handler_create.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_query_extended.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hw_info_config.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hw_device_id.h
    ${CMAKE_CURRENT_SOURCE_DIR}/hw_device_id_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/linux_inc.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/engine_info.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/engine_info_impl.h
    ${CMAKE_CURRENT_SOURCE_DIR}/flags${BRANCH_DIR_SUFFIX}/drm_query_flags.h
    ${CMAKE_CURRENT_SOURCE_DIR}/memory_info.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_context_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_context_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_inc.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_interface.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_interface.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_library_helper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_library_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_library_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_memory_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_memory_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_socket.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_thread_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_thread_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/os_time_linux.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/os_time_linux.h
    ${CMAKE_CURRENT_SOURCE_DIR}/page_table_manager_functions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/print.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/settings_reader_create.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sys_calls.h
    ${CMAKE_CURRENT_SOURCE_DIR}/system_info.h
    ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/system_info_impl.h
)

if(SUPPORT_DG1 AND "${BRANCH_TYPE}" STREQUAL "")
  list(APPEND NEO_CORE_OS_INTERFACE_LINUX
       ${CMAKE_CURRENT_SOURCE_DIR}/drm_memory_manager_allocate_in_device_pool_dg1.cpp
       ${CMAKE_CURRENT_SOURCE_DIR}/drm_query_dg1.cpp
  )
else()
  list(APPEND NEO_CORE_OS_INTERFACE_LINUX
       ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_memory_manager_allocate_in_device_pool.cpp
       ${CMAKE_CURRENT_SOURCE_DIR}${BRANCH_DIR_SUFFIX}/drm_query.cpp
  )
endif()

set_property(GLOBAL PROPERTY NEO_CORE_OS_INTERFACE_LINUX ${NEO_CORE_OS_INTERFACE_LINUX})
add_subdirectories()
