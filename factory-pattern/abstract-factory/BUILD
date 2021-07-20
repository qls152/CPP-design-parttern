package(default_visibility = ["//visibility:public"])

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
	name = "pizza_ingredient_factory_interface",
	srcs = ["pizza_ingredient_factory.h"],
	deps = [
		"//common/pizza-ingredient:dough_interface",
		"//common/pizza-ingredient:sauce_interface",
		"//common/pizza-ingredient:cheese_interface",
	]
)

cc_library(
	name = "abstract_factory_pizza_interface",
	srcs = [
		"abstract_factory_pizza.h",
		"abstract_factory_pizza.cc",
	],
	deps = [
           ":pizza_ingredient_factory_interface",
	   "//common/pizza:pizza-interface",
	],
)

cc_library(
	name = "ny_pizza_ingredient_factory",
	srcs = [
		"ny_pizza_ingredient_factory.h",
		"ny_pizza_ingredient_factory.cc",
	],
	deps = [
		":pizza_ingredient_factory_interface",
		"//common/pizza-ingredient:marinara_sauce",
		"//common/pizza-ingredient:spinach_cheese",
		"//common/pizza-ingredient:thin_crust_dough",
	],
)

cc_library(
	name = "chicago_pizza_ingredient_factory",
	srcs = [
		"chicago_pizza_ingredient_factory.h",
		"chicago_pizza_ingredient_factory.cc",
	],
	deps = [
		":pizza_ingredient_factory_interface",
		"//common/pizza-ingredient:reggiano_cheese",
		"//common/pizza-ingredient:plum_tomato_sauce",	
		"//common/pizza-ingredient:thick_crust_dough",
	],
)

cc_library(
	name = "abstract_factory_cheese_pizza",
	srcs = [
		"abstract_factory_cheese_pizza.h",
		"abstract_factory_cheese_pizza.cc",
	],
	deps = [
		":abstract_factory_pizza_interface",
		":pizza_ingredient_factory_interface",
	],
)

cc_library(
	name = "abstract_factory_veggie_pizza",
	srcs = [
		"abstract_factory_veggie_pizza.h",
		"abstract_factory_veggie_pizza.cc",
	],
	deps = [
		":abstract_factory_pizza_interface",
		":pizza_ingredient_factory_interface",
	],
)

cc_library(
	name = "ny_pizza_store",
	srcs = [
		"ny_pizza_store.h",
		"ny_pizza_store.cc",
	],
	deps = [
	   "abstract_factory_cheese_pizza",
	   "abstract_factory_veggie_pizza",
	   "pizza_ingredient_factory_interface",	
	],
)