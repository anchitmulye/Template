#include "Logger.hpp"

namespace Template
{
    std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;

    void Logger::Init(const int& logLevel, const char* filePath)
    {
        if (spdlog::get("Engine") != nullptr)
            return;

        std::vector<spdlog::sink_ptr> logSinks;
        logSinks.emplace_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
        logSinks.emplace_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(filePath, true));

        logSinks[0]->set_pattern("%^[%T] %n: %v%$");
        logSinks[1]->set_pattern("[%T] [%l] %n: %v");

        s_CoreLogger = std::make_shared<spdlog::logger>("Engine", begin(logSinks), end(logSinks));
        spdlog::register_logger(s_CoreLogger);

        spdlog::level::level_enum logLevelInternal;
        switch (logLevel)
        {
            case 0:
                logLevelInternal = spdlog::level::trace;
                break;
            case 1:
                logLevelInternal = spdlog::level::debug;
                break;
            case 2:
                logLevelInternal = spdlog::level::info;
                break;
            case 3:
                logLevelInternal = spdlog::level::warn;
                break;
            case 4:
                logLevelInternal = spdlog::level::err;
                break;
            case 5:
                logLevelInternal = spdlog::level::critical;
                break;
            case 6:
                logLevelInternal = spdlog::level::off;
                break;
            default:
                TP_CORE_ERROR("Invalid log level");
                return;
        }

        s_CoreLogger->set_level(logLevelInternal);
        s_CoreLogger->flush_on(logLevelInternal);
    }
} // namespace Template
