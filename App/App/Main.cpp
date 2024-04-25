#include "Core/Engine.hpp"

int main()
{
    temp::Engine* engine = new temp::Engine();
    engine->CreateEngine();
    delete engine;
}