package(default_visibility = ["//visibility:public"])

cc_binary(
	name = "simple_factory",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = ["simple_factory.cc"],
	deps = [
	  "//common/store:pizza-store",
	],
)

cc_binary(
	name = "main_factory",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = ["main_factory.cc"],
	deps = [
		"//factory:nypizza_store",
		"//factory:chicagostylepizza_store",
	],
)

cc_binary(
	name = "main_abstract_factory",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = [
		"main_abstract_factory.cc",
	],
	deps = [
		"//abstract-factory:ny_pizza_store",
		"//abstract-factory:ny_pizza_ingredient_factory",
		"//abstract-factory:chicago_pizza_ingredient_factory",
	],
)
