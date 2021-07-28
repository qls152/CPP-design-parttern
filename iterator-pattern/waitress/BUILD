package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "waitress",
	srcs = [
		"waitress.h",
		"waitress.cc",
	],
	deps = [
		"//menuitem:diner_menu",
		"//menuitem:pancake_house_menu",
		"//iterator:iterator_interface",
	],
)