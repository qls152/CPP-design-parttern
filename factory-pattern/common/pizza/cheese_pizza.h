#pragma once

#include "common/pizza/pizza.h"

// note: 本部分仅仅为了演示各个工厂模式的具体工作方式
// 因此不会实现所有pizza具体类
// 仅仅实现cheese_pizza/veggie_pizza
// 若要全部实现，其实仅仅需要copy即可
class CheesePizza : public Pizza {
private:
  PizzaName pizza_name_{"CheesePizza"};

public:
  virtual void prepare() override;
  virtual void bake() override;
  virtual void cut() override;
  virtual void box() override;
};