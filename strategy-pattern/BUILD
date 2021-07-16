package(default_visibility = ["//visibility:public"])

cc_binary(
  name = "main",
  copts = [
	  "-std=c++17",
	  "-O2",
	  "-Wall",
    "-rdynamic",
  ],
  srcs = [
	  "main.cc"
  ],

  deps = [
     "//duck:duck-lib",
  ],
)