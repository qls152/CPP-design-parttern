#include "abstract-factory/chicago_pizza_ingredient_factory.h"

#include "common/pizza-ingredient/reggiano_cheese.h"
#include "common/pizza-ingredient/plum_tomato_sauce.h"
#include "common/pizza-ingredient/thick_crust_dough.h"

std::shared_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese() {
  return std::make_shared<ReggianoCheese>();
}

std::shared_ptr<Dough> ChicagoPizzaIngredientFactory::createDough() {
  return std::make_shared<ThickCrustDough>();
}

std::shared_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce() {
  return std::make_shared<PlumTomatoSauce>();
}