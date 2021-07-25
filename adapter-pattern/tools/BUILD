package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "duck_interface",
	srcs = ["duck.h"],
)

cc_library(
	name = "turkey_interface",
	srcs =["turkey.h"],
)

cc_library(
	name = "wild_turkey",
	srcs = [
		"wild_turkey.h",
		"wild_turkey.cc",
	],
	deps = [
		":turkey_interface",
	],
)

cc_library(
	name = "turkey_adapter",
	srcs = [
		"turkey_adapter.h",
		"turkey_adapter.cc",
	],
	deps = [
		":duck_interface",
		":turkey_interface",
	],
)