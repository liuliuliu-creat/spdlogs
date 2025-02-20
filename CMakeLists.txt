cmake_minimum_required(VERSION 3.14)
project(MyLoggerProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找spdlog包
find_package(spdlog REQUIRED)

add_executable(logger
    main.cpp
)

# 链接spdlog库
target_link_libraries(logger
    PRIVATE
        spdlog::spdlog
)

# 设置编译定义（启用TRACE级别日志）
target_compile_definitions(logger
    PRIVATE
        SPDLOG_ACTIVE_LEVEL=SPDLOG_LEVEL_TRACE
)
