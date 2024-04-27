#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <spdlog/sinks/basic_file_sink.h>

namespace Template
{
    class Logger
    {
    public:
        static void Init(const int& logLevel = 6, const char* filePath = "Engine.log");

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
    };
} // namespace Template

#define TP_CORE_CRITICAL(...) ::Template::Logger::GetCoreLogger()->critical(__VA_ARGS__)
#define TP_CORE_ERROR(...)    ::Template::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define TP_CORE_WARN(...)     ::Template::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define TP_CORE_INFO(...)     ::Template::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define TP_CORE_TRACE(...)    ::Template::Logger::GetCoreLogger()->trace(__VA_ARGS__)

