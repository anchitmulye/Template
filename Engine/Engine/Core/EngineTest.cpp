#include "Engine.hpp"
#include <gtest/gtest.h>

namespace Template
{
    namespace Test
    {
        class EngineTest : public ::testing::Test {
            protected:
                Engine* engine;
            protected:
                void SetUp() override 
                {
                    engine = new Engine();
                }
                void TearDown() override 
                {
                    delete engine;
                }
        };

        TEST_F(EngineTest, TestNumber)
        {
            auto num = engine->TestNumber();
            ASSERT_TRUE(num == 10);
        }

        TEST_F(EngineTest, TestString)
        {
            auto str = engine->TestString();
            ASSERT_EQ("Testing", str);
        }
    } // namespace Test
} // namespace Template


