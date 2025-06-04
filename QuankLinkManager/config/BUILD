package(default_visibility = ["//visibility:public"])

cc_library(
    name = "config",
    srcs = ["config.cc"],
    hdrs = ["config.h"],
)

cc_test(
    name = "config_test",
    srcs = ["config_test.cc"],
    deps = [
        ":config",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
