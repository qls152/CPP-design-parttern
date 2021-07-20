#include "abstract-factory/abstract_factory_veggie_pizza.h"

#include "abstract-factory/pizza_ingredient_factory.h"

#include <iostream>

AbstractFactoryVeggiePizza::AbstractFactoryVeggiePizza(std::shared_ptr<PizzaIngredientFactory> pizza_ingreddient_factory)
  : AbstractFactoryPizza(pizza_ingreddient_factory) {}

void AbstractFactoryVeggiePizza::bake() {
  std::cout << pizza_name_.getPizzaName() << " bake. \n";
}

void AbstractFactoryVeggiePizza::box() {
  std::cout << pizza_name_.getPizzaName() << " box. \n";
}

void AbstractFactoryVeggiePizza::cut() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}

void AbstractFactoryVeggiePizza::prepare() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";
  AbstractFactoryPizza::prepare();	
}