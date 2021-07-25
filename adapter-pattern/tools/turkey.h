#pragma once

//此处定义火鸡接口
class Turkey {
public:
  virtual ~Turkey() = default;
  virtual void gobble() = 0;
  virtual void fly() = 0;
};