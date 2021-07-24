package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "command_interface",
	srcs = ["command.h"],
)

cc_library(
	name = "light_command",
	srcs = [
		"light_command.h",
		"light_command.cc",
	],
	deps = [
		":command_interface",
		"//slot:light_interface",
	],
)

cc_library(
	name = "garge_door_command",
	srcs = [
		"garge_door_command.h",
		"garge_door_command.cc",
	],
	deps = [
		":command_interface",
		"//slot:garge_door_interface",
	]
)