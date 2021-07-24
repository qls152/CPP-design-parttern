package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "light_interface",
	srcs = [
		"light.h",
	],
)

cc_library(
	name = "normal_light",
	srcs = [
		"normal_light.h",
		"normal_light.cc",
	],
	deps = [
		":light_interface",
	],
)