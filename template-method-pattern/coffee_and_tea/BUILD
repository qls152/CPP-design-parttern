package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "coffee_with_hook",
	srcs = [
		"coffee_with_hook.h",
		"coffee_with_hook.cc",
	],
	deps = [
		"//caffeine_beverage_with_hook:caffeine_beverage_with_hook_interface",
	],
)

cc_library(
	name = "tea_with_hook",
	srcs = [
		"tea_with_hook.h",
		"tea_with_hook.cc",
	],
	deps = [
		"//caffeine_beverage_with_hook:caffeine_beverage_with_hook_interface",
	],
)