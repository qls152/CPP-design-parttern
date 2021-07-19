package(default_visibility = ["//visibility:public"])

cc_library(
	name = "pizza_store",
	srcs = ["pizza_store.h"],
)

cc_library(
	name = "nypizza_store",
	srcs = [
		"nypizza_store.h",
		"nypizza_store.cc",
	],
	deps = [
		":pizza_store",
		"//common/pizza:cheese_pizza",
		"//common/pizza:veggie_pizza",
	],
)

cc_library(
	name = "chicagostylepizza_store",
	srcs = [
		"chicagostylepizza_store.h",
		"chicagostylepizza_store.cc",
	],
	deps = [
		":pizza_store",
		"//common/pizza:cheese_pizza",
		"//common/pizza:veggie_pizza",
	],
)