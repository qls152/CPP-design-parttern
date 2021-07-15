# 策略模式

本部分实现HEADFirst中最终版的代码，关于其详细的分析过程可参考相应的书籍。

其构建基于bazel.

# 本部分的设计原则

1. 找出应用中可能需要变化之处，把它 们独立出来，不要和那些不需要变化
的代码混在一起。

2. 针对接口编程，而不是针对实现编程。

3. 多用组合，少用继承。

# note

fly-behavior目录下实现 flyBehavior接口以及相关派生类

quack-behavior目录下实现 quackBehavior接口以及相关派生类

duck目录实现 Duck接口以及各个派生类

main.cc实现相应的测试。

## 构建过程为： cd strategy-pattern && bazel build //:main