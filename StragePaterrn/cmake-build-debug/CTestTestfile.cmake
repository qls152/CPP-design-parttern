# CMake generated Testfile for 
# Source directory: /Users/qinliansong/Downloads/日常练习/HeadFirst_C-/StragePaterrn
# Build directory: /Users/qinliansong/Downloads/日常练习/HeadFirst_C-/StragePaterrn/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_miniducksimulator "test_miniducksimulator.cpp")
set_tests_properties(test_miniducksimulator PROPERTIES  _BACKTRACE_TRIPLES "/Users/qinliansong/Downloads/日常练习/HeadFirst_C-/StragePaterrn/CMakeLists.txt;17;ADD_TEST;/Users/qinliansong/Downloads/日常练习/HeadFirst_C-/StragePaterrn/CMakeLists.txt;0;")
subdirs("duck")
subdirs("flyable")
subdirs("quackable")
