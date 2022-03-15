cmake_minimum_required(VERSION 3.19)
project(git22 C)

set(CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:LIBCMTD")
set(CMAKE_C_STANDARD 99)
#//增加头文件
include_directories ("libgit2/include")

link_directories(libgit2/build/Debug)

add_executable(git22 main.c)
target_link_libraries(git22  git2)




