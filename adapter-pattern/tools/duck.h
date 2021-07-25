#pragma once

// 此类声明鸭子接口
// 该章中示例是将火鸡接口适配成鸭子接口
class Duck {
public:
  virtual ~Duck() = default;
  virtual void quack() = 0;
  virtual void fly() = 0;
};
