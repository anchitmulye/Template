#pragma once

#include <iostream>

namespace temp
{
    class Engine
    {
    public:
        Engine();
        ~Engine();
        void CreateEngine();
    private:
        void InternalFunction();
        std::string TestString();
        uint8_t TestNumber();
    };
} // namespace temp
