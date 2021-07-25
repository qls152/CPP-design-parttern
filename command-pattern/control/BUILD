package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "simple_remote_control",
	srcs = [
		"simple_remote_control.h",
		"simple_remote_control.cc",
	],
	deps = [
	    "//command:command_interface"
	],
)

cc_library(
	name = "remote_control",
	srcs = [
		"remote_control.h",
		"remote_control.cc",
	],
	deps = [
		"//command:command_interface",
		"//command:no_command",
	],
)