#pragma once

#include "abstract-factory/abstract_factory_pizza.h"

class PizzaIngredientFactory;

class AbstractFactoryCheesePizza : public AbstractFactoryPizza {
private:
  PizzaName pizza_name_{"AbstractFactory_CheesePizza"};

public:
  explicit AbstractFactoryCheesePizza(std::shared_ptr<PizzaIngredientFactory> pizza_ingreddient_factory);
  virtual void prepare() override;
  virtual void bake() override;
  virtual void cut() override;
  virtual void box() override;
};