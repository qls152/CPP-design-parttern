package(default_visibility = ["//visibility:public"])

cc_library(
  name = "duck-lib",
  copts = [
	  "-std=c++17",
	  "-O2",
	  "-Wall",
    "-rdynamic",
  ],
  srcs = [
	  "mallard_duck.cc",
    "duck.h",
    "mallard_duck.h",
  ],

  deps = [
     "//fly-behavior:fly-behavior-lib",
     "//quack-behavior:quack-behavior-lib",
  ],
)