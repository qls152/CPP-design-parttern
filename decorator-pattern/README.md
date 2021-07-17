# 装饰者模式

本部分实现HEAD First中最终版的代码，关于其详细的分析过程可参考相应的书籍。

其构建基于bazel。

## 定义

动态的将责任附加到对象上。若要扩展功能，装饰者提供了比继承更有弹性的替代方案。

# 本部分的设计原则

1. 开放-关闭原则：类应该对扩展开放，对修改关闭。

# note

1. beverage 中为饮料及其实例

2. condiment_decorator为调料及其实例

3. main.cc为测试uint

# 构建过程

cd decorator-pattern && bazel build //:main
