cmake_minimum_required(VERSION 3.10.0)

add_library(
	student_lib STATIC
	student.cpp
)

target_include_directories(student_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
