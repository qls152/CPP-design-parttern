# 外观模式

本部分实现HEAD First中最终版的代码，关于其详细的分析过程可参考相应的书籍。

其构建基于bazel。

## 定义

提供了一个统一接口，用来访问子系统中的一群接口。外观定义了一个高层接口，让子系统更容易使用。

# 设计原则

1. 最少知识原则：只和你的密友交谈

这个原则希望我们在设计中不要让太多类耦合在一起，免得修改系统的一部分会影响到其他部分。

关于该原则的应用标准可参考 HeadFirst书中266-267页，此处不赘述。

# note


# 构建过程

bazel build //:all

## 附注

本部分实现HeadFirst书中，适配器模式与外观模式中外观模式部分。

该部分涉及6个类，此处只给出类的简单实现 主要用来展示外观模式的使用。
