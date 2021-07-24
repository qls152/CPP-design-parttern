package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "light_interface",
	srcs = [
		"light.h",
	],
)

cc_library(
	name = "garge_door_interface",
	srcs = [
		"garge_door.h",
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

cc_library(
	name = "normal_garge_door",
	srcs = [
		"normal_garge_door.h",
		"normal_garge_door.cc",
	],
	deps = [
		":garge_door_interface",
	],
)