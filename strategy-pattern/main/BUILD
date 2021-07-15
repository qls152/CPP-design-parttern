package(default_visibility = ["//visibility:public"])

cc_binary(
  name = "main",
  copts = [
	  "-std=c++17",
	  "-O2",
	  "-Wall",
  ],
  srcs = ["main.cc"],
 #includes = ["@"]
  deps = [
     "//duck:duck-lib",
  ],
)