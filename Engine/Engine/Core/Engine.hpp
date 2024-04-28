#pragma once

#include <iostream>

namespace Template
{
    class Engine
    {
    public:
        Engine();
        ~Engine();
        void CreateEngine();
        uint8_t TestNumber();
        std::string TestString();
    private:
        void InternalFunction();
    };
} // namespace Template
