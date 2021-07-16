package(default_visibility = ["//visibility:public"])

cc_binary(
	name = "main",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = ["main.cc"],
	deps = [
	  "//observer:observer-lib",
	  "//subject:weather-data-lib",
	],
)
