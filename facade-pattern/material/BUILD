package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "amp_interface",
	srcs = ["amp.h"],
)

cc_library(
	name = "dvd_interface",
	srcs = ["dvd.h"],
)

cc_library(
	name = "lights_interface",
	srcs = ["lights.h"],
)

cc_library(
	name = "popper_interface",
	srcs = ["popper.h"],
)

cc_library(
	name = "projector_interface",
	srcs = ["projector.h"],
)

cc_library(
	name = "screen_interface",
	srcs = ["screen.h"],
)

cc_library(
	name = "normal_amp",
	srcs = [
		"normal_amp.h",
		"normal_amp.cc",
	],
	deps = [
		":dvd_interface",
		":amp_interface",
	],
)

cc_library(
	name = "normal_dvd",
	srcs = [
		"normal_dvd.h",
		"normal_dvd.cc",
	],
	deps = [
		":dvd_interface",
	],
)

cc_library(
	name = "normal_screen",
	srcs = [
		"normal_screen.h",
		"normal_screen.cc",
	],
	deps = [
		":screen_interface",
	],
)

cc_library(
	name = "home_theather_facade",
	srcs = [
		"home_theather_facade.h",
		"home_theather_facade.cc",
	],
	deps = [
		":dvd_interface",
		":lights_interface",
		":amp_interface",
		":popper_interface",
		":projector_interface",
		":screen_interface"
	],
)

