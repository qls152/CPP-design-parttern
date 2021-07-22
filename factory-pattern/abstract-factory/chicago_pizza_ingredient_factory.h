#pragma once

#include "abstract-factory/pizza_ingredient_factory.h"

// 本部分定义抽象工厂接口
class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
  virtual ~ChicagoPizzaIngredientFactory() = default;
  virtual std::shared_ptr<Cheese> createCheese() override;
  virtual std::shared_ptr<Dough> createDough() override;
  virtual std::shared_ptr<Sauce> createSauce() override;
};