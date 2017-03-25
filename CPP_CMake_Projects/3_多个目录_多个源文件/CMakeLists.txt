# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.0)
# 项目信息
project (Demo3)
# 指定生成目标
# add_executable(Demo main.cpp functions.cpp)
# 这样写当然没什么问题，但是如果源文件很多，
# 把所有源文件的名字都加进去将是一件烦人的工作。
# 更省事的方法是使用 aux_source_directory 命令，
# 该命令会查找指定目录下的所有源文件，然后将结果存进指定变量名。其语法如下：
# aux_source_directory(<dir> <variable>)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加math子目录
# 使用命令 add_subdirectory 指明本项目包含一个子目录 math，这样 math 目录下的 CMakeLists.txt 文件和源代码也会被处理
add_subdirectory(math)

# 指定生成目标
add_executable(Demo ${DIR_SRCS})

# 添加链接库
# 使用命令 target_link_libraries 指明可执行文件 main 需要连接一个名为 MathFunctions 的链接库
target_link_libraries(Demo libFunctions.a)

