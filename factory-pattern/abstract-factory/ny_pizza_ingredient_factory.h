#pragma once

#include "abstract-factory/pizza_ingredient_factory.h"

// 本部分定义抽象工厂接口
class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
  virtual ~NYPizzaIngredientFactory() = default;
  virtual std::shared_ptr<Cheese> createCheese() override;
  virtual std::shared_ptr<Dough> createDough() override;
  virtual std::shared_ptr<Sauce> createSauce() override;
};