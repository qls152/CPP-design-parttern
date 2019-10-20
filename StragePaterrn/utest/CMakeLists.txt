
AUX_SOURCE_DIRECTORY(. SRC)

ADD_EXECUTABLE(test_miniducksimulator ${SRC})

TARGET_LINK_LIBRARIES(test_miniducksimulator Flyable Quack Duck /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a)





