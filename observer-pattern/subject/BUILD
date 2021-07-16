package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "weather-data-lib",
	srcs = ["weather_data.cc"],
	hdrs = [
		"weather_data.h"
		],
	deps = [
		":subject-interface",
	],
)

cc_library(
	name = "subject-interface",
	srcs = ["subject.h"],
	deps = ["//observer:observer-interface",],
)