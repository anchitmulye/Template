#include "Engine.hpp"

namespace temp
{
    Engine::Engine()
    {
        std::cout << "Constructed\n";
    }

    Engine::~Engine()
    {
        std::cout << "Destructed\n";
    }

    void Engine::CreateEngine()
    {
        std::cout << "Create Engine\n";
    }

    void Engine::InternalFunction()
    {

    }

    std::string Engine::TestString()
    {
        return "Testing";
    }

    uint8_t Engine::TestNumber()
    {
        return 10;
    }
} // namespace 
