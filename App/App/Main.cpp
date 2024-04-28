#include "Core/Engine.hpp"

int main()
{
    Template::Engine* engine = new Template::Engine();
    engine->CreateEngine();
    delete engine;
}