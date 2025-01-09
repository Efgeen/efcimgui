cmake_minimum_required(VERSION 3.20)

project("efcimgui")

set(_DEFINES "")
list(APPEND _DEFINES "IMGUI_DISABLE_OBSOLETE_FUNCTIONS=0x01")
list(APPEND _DEFINES "IMGUI_IMPL_API=extern\t\"C\"")

set(_INCLUDES "")
list(APPEND _INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/")
list(APPEND _INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui")
list(APPEND _INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/backends/")

set(_SOURCES "")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/cimgui.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_draw.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_demo.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_widgets.cpp")
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_tables.cpp")
	list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_tables.cpp")
endif()
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/backends/imgui_impl_win32.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/backends/imgui_impl_dx9.cpp")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/efcimgui_impl_win32.c")
list(APPEND _SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/efcimgui_impl_dx9.c")

set(_LIBRARIES "")
list(APPEND _LIBRARIES "imm32")
list(APPEND _LIBRARIES "d3d9")

add_library(${PROJECT_NAME} STATIC ${_SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE ${_DEFINES})
target_include_directories(${PROJECT_NAME} PRIVATE ${_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${_LIBRARIES})

