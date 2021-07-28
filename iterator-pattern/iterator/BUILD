package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "iterator_interface",
	srcs = ["iterator.h"],
)

cc_library(
	name = "diner_menu_iterator",
	srcs = [
		"diner_menu_iterator.h",
		"diner_menu_iterator.cc",
	],
	deps = [
		":iterator_interface",
		"//menuitem:menu_item",
	],
)

cc_library(
	name = "pancake_house_menu_iterator",
	srcs = [
		"pancake_house_menu_iterator.h",
		"pancake_house_menu_iterator.cc",
	],
	deps = [
		":iterator_interface",
		"//menuitem:menu_item",
	],
)

