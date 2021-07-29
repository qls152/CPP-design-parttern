package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "item",
	srcs = ["item.h"],
)

cc_library(
	name = "menu_component_interface",
	srcs = [
		"menu_component.h",
		"menu_component.cc",
	],
)

cc_library(
	name = "null_menu",
	srcs = ["null_menu.h"],
)

cc_library(
	name = "menu",
	srcs = [
		"menu.h",
		"menu.cc",
	],
	deps = [
		":menu_component_interface",
		":null_menu",
	],
)

cc_library(
	name = "menu_item",
	srcs = [
		"menu_item.h",
		"menu_item.cc",
	],
	deps = [
		":item",
		":menu_component_interface",
	],
)