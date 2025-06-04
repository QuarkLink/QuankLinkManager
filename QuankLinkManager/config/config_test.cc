#include "QuankLinkManager/config/config.h"

#include <gtest/gtest.h>

namespace {
// This test case only for test the build system.
// Remove this test case after any other test cases are added.
TEST(ConfigTest, Test) { EXPECT_EQ(quanklinkmanager::config::hello(), "Hello, World!"); }
}  // namespace
