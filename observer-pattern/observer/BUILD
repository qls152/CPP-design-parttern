package(default_visibility = ["//visibility:public"])

cc_library(
	name = "observer-lib",
	srcs = [
		"current_conditions_display.h",
		"current_conditions_display.cc",
	],
	deps = [
	       ":observer-interface",
	       "//subject:subject-interface",
	],
)

cc_library(
	name = "observer-interface",
	srcs = ["observer.h"],	
)