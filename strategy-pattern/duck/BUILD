package(default_visibility = ["//visibility:public"])

cc_binary(
  name = "duck",
  copts = [
	  "-std=c++17",
	  "-O2",
	  "-Wall",
    "-rdynamic",
  ],
  srcs = [
	  "mallard_duck.cc",
    "main.cc",
    "duck.h",
    "mallard_duck.h",
  ],

  deps = [
     "//fly-behavior:fly-behavior-lib",
     "//quack-behavior:quack-behavior-lib",
  ],
)