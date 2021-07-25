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
	   "//command:garge_door_command",
	   "//slot:normal_garge_door",
	],
)

cc_binary(
	name = "remote_control_test",
	copts = [
		"-O2",
		"-Wall",
	],
	srcs = [
		"remote_control_test.cc",
	],
	deps = [
	   "//command:light_command",
	   "//command:lightoff_command",
	   "//slot:normal_light",
	   "//control:remote_control",
	   "//command:garge_door_command",
	   "//command:garge_door_off_command",
	   "//slot:normal_garge_door",
	],
)