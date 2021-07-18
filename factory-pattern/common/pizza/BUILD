package(default_visibility = ["//visibility:public"])

cc_library(
	name = "pizza-interface",
	srcs = ["pizza.h"],
)

cc_library(
	name = "cheese_pizza",
	srcs = [
		"cheese_pizza.h",
		"cheese_pizza.cc",
	],
	deps = [
		":pizza-interface",
	],
)

cc_library(
	name = "veggie_pizza",
	srcs = [
		"veggie_pizza.h",
		"veggie_pizza.cc",
	],
	deps = [
		":pizza-interface",
	],
)