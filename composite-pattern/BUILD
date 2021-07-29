package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
	name = "composite_pattern_test",
	srcs = [
	       "composite_pattern_test.cc",
	],
	copts = [],
	deps = [
		"//waitress:waitress",
		"//menu_component:menu",
		"//menu_component:menu_item",
	],
)