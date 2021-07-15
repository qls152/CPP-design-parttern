package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "fly-behavior-lib",
	copts = [
		"-std=c++17",
		"-O2",
                "-Wall",
	],
	srcs = [
		"fly_no_way.cc",
		"fly_with_wings.cc"],
	hdrs = [
		"fly_behavior.h",
		"fly_no_way.h",
		"fly_with_wings.h"
	]
)