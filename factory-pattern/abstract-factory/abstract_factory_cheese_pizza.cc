#include "abstract-factory/abstract_factory_cheese_pizza.h"

#include "abstract-factory/pizza_ingredient_factory.h"

#include <iostream>

AbstractFactoryCheesePizza::AbstractFactoryCheesePizza(std::shared_ptr<PizzaIngredientFactory> pizza_ingreddient_factory)
  : AbstractFactoryPizza(pizza_ingreddient_factory) {}

void AbstractFactoryCheesePizza::bake() {
  std::cout << pizza_name_.getPizzaName() << " bake. \n";
}

void AbstractFactoryCheesePizza::box() {
  std::cout << pizza_name_.getPizzaName() << " box. \n";
}

void AbstractFactoryCheesePizza::cut() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}

void AbstractFactoryCheesePizza::prepare() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";
  AbstractFactoryPizza::prepare();	
}