cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloWorld VERSION 1.0.0)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(./app/src DIR_SRCS)


add_subdirectory(./app/src/problems)
# add the executable
add_executable(HelloWorld ${DIR_SRCS})


# 添加链接库
target_link_libraries(HelloWorld Problems)