package(default_visibility = ["//visibility:public"])

cc_binary(
	name = "main",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = ["main.cc"],
	deps = [
	  "//beverage:beverage",
	  "//condiment_decorator:condiment_decorator",
	],
)