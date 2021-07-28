package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "item",
	srcs = ["item.h"],
)

cc_library(
	name = "menu_item",
	srcs = [
		"menu_item.h",
		"menu_item.cc",
	],
	deps = [
		":item",
	],
)

cc_library(
	name = "diner_menu",
	srcs = [
		"diner_menu.h",
		"diner_menu.cc"
	],
	deps = [
		":menu_item",
		"//iterator:diner_menu_iterator",	
	],
)

cc_library(
	name = "pancake_house_menu",
	srcs = [
		"pancake_house_menu.h",
		"pancake_house_menu.cc",
	],
	deps = [
		":menu_item",
		"//iterator:pancake_house_menu_iterator",
	],
)