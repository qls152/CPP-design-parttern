#pragma once

#include "common/pizza/pizza.h"
#include <memory>

//此处的pizza是为了测试抽象工厂方法所定制接口
class Dough;
class Sauce;
class Cheese;
class PizzaIngredientFactory;

// note: C++中 虚基类一般不建议声明状态，这里只是为了示例
class AbstractFactoryPizza : public Pizza {
public:
  AbstractFactoryPizza(std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory) 
    : pizza_ingredient_factory_(std::move(pizza_ingredient_factory)) {}
  virtual ~AbstractFactoryCheesePizza() = default;
  virtual void prepare() override;
private:
  std::shared_ptr<PizzaIngredientFactory> pizza_ingredient_factory_{};
  std::shared_ptr<Dough> dough_{};
  std::shared_ptr<Sauce> sauce_{};
  std::shared_ptr<Cheese> cheese_{};
};
