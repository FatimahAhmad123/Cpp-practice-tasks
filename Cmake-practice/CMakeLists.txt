cmake_minimum_required(VERSION 3.10.0)

project(Hello)

add_library( # Defaul: builds static libraries, you can specify after library name
	calculator_lib # STATIC / SHARED/ MODULE (Doesn't work for Module like that tho)
	calculator.h
	calculator.cpp
)

# ldd while running lists all linker dependencies
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(Hello PRIVATE calculator_lib)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	# Set warning flags and treat warnings as errors
	target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()
