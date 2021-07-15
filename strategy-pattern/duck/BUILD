package(default_visibility = ["//visibility:public"])

cc_library(
  name = "duck-lib",
  copts = [
	  "-std=c++17",
	  "-O2",
	  "-Wall",
  ],
  srcs = glob([
	  "duck/*.cc",
	  "duck/*.h",
  ]),
  deps = [
     "//fly-behavior:fly-behavior-lib",
     "//quack-behavior:quack-behavior-lib",
  ],
)