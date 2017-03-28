# 子目录中的 CMakeLists.txt

# 在CMakeLists.txt文件的开头部分增加几个SET语法行
# 让 CMake 支持 gdb 的设置也很容易，只需要指定 Debug 模式下开启 -g 选项：
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
# 使用命令 add_library 将 src 目录中的源文件编译为静态链接库。
add_library (MathFunctions ${DIR_LIB_SRCS})
