#pragma once

#include "abstract-factory/abstract_factory_pizza.h"

class PizzaIngredientFactory;

class AbstractFactoryVeggiePizza : public AbstractFactoryPizza {
private:
  PizzaName pizza_name_{"AbstractFactory_VeggiePizza"};

public:
  explicit AbstractFactoryVeggiePizza(std::shared_ptr<PizzaIngredientFactory> pizza_ingreddient_factory);
  virtual void prepare() override;
  virtual void bake() override;
  virtual void cut() override;
  virtual void box() override;
};