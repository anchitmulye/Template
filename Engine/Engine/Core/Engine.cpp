#include "Engine.hpp"
#include "Config.hpp"

#include "Log/Logger.hpp"

namespace Template
{
    Engine::Engine()
    {
        Template::Logger::Init(TP_LOG_LEVEL, TP_LOG_FILE);

        // To show all log levels
        TP_CORE_TRACE("Constructed");
        TP_CORE_INFO("Constructed");
        TP_CORE_WARN("Constructed");
        TP_CORE_ERROR("Constructed");
        TP_CORE_CRITICAL("Constructed");
    }

    Engine::~Engine()
    {
        TP_CORE_TRACE("Destructed");
    }

    void Engine::CreateEngine()
    {
        TP_CORE_TRACE("Create Engine");
    }

    void Engine::InternalFunction()
    {
        TP_CORE_TRACE("InternalFunction()");
    }

    std::string Engine::TestString()
    {
        TP_CORE_TRACE("TestString()");
        return "Testing";
    }

    uint8_t Engine::TestNumber()
    {
        TP_CORE_TRACE("TestNumber()");
        return 10;
    }
} // namespace Template
