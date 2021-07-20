package(default_visibility = ["//visibility:public"])

cc_library(
	name = "dough-interface",
	srcs = ["dough.h"],
)

cc_library(
	name = "sauce-interface",
	srcs = ["sauce.h"],
)

cc_library(
	name = "cheese-interface",
	srcs = ["cheese.h"],
)

cc_library(
	name = "thin_crust_dough",
	srcs = [
	   "thin_crust_dough.h",
	],
	deps = [
		":dough-interface",
	],
)

cc_library(
	name = "thick_crust_dough",
	srcs = [
	   "thick_crust_dough.h",
	],
	deps = [
		":dough-interface",
	],
)

cc_library(
	name = "marinara_sauce",
	srcs = [
	   "marinara_sauce.h",
	],
	deps = [
		":sauce-interface",
	],
)

cc_library(
	name = "plum_tomato_sauce",
	srcs = [
	   "plum_tomato_sauce.h",
	],
	deps = [
		":sauce-interface",
	],
)

cc_library(
	name = "reggiano_cheese",
	srcs = [
		"reggiano_cheese.h",
	],
	deps = [
		":cheese-interface",
	],
)

cc_library(
	name = "spinach_cheese",
	srcs = [
		"spinach_cheese.h",
	],
	deps = [
		":cheese-interface",
	],
)