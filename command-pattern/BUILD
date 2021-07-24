package(default_visibility = ["//visibility:public"])

cc_binary(
	name = "simple_remote_control_test",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = [
		"simple_remote_control_test.cc",
	],
	deps = [
	   "//command:light_command",
	   "//slot:normal_light",
	   "//control:simple_remote_control",
	],
)