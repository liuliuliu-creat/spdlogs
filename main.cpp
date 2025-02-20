#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h" // 控制台带颜色的sink
#include "spdlog/sinks/basic_file_sink.h"    // 基本文件sink

int main()
{
    // 创建控制台和文件sink
    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    auto file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("logs.txt", true);

    // 设置各sink的格式
    console_sink->set_pattern("%^[%H:%M:%S] %v%$");          // 控制台带颜色
    file_sink->set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");   // 文件带日期和级别

    // 创建组合logger
    auto logger = std::make_shared<spdlog::logger>("combined_logger", spdlog::sinks_init_list{console_sink, file_sink});
    logger->set_level(spdlog::level::trace); // 设置日志级别为最低（trace）
    spdlog::set_default_logger(logger);      // 设为默认logger

    // 示例日志
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");

    // 修改日志级别为debug
    logger->set_level(spdlog::level::debug);
    spdlog::debug("This message should be displayed..");

    // 编译时日志级别（需定义SPDLOG_ACTIVE_LEVEL）
    SPDLOG_TRACE("This trace message will not be displayed (level=debug)");
    SPDLOG_DEBUG("Some debug message");

    // 确保所有日志写入文件
    spdlog::shutdown();
}
