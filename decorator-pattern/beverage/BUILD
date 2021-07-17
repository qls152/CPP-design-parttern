package(default_visibility = ["//visibility:public"])

cc_library(
	name = "beverage-interface",
	srcs = ["beverage.h"],
)

cc_library(
	name = "beverage",
	srcs = [
		"espresso.h",
		"houseblend.h",
	],
	deps = [
		":beverage-interface",
	],
)