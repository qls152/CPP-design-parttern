#pragma once

#include <string>

// 此处定义的Pizza接口对所有工厂均可见
class Pizza {
public:
  virtual ~Pizza() = default;
  virtual void prepare() = 0;
  virtual void bake() = 0;
  virtual void cut() = 0;
  virtual void box() = 0;
};

// 这里主要为了设置各个Pizza的name，方便测试观测
class PizzaName {
public:
  explicit PizzaName(const std::string& pizza_name) : pizza_name_(pizza_name) {}
  const std::string& getPizzaName() const {
    return pizza_name_;
  }
private:
  std::string pizza_name_{"unknown name"};
};