#include "abstract-factory/ny_pizza_ingredient_factory.h"

#include "common/pizza-ingredient/marinara_sauce.h"
#include "common/pizza-ingredient/spinach_cheese.h"
#include "common/pizza-ingredient/thin_crust_dough.h"

std::shared_ptr<Cheese> NYPizzaIngredientFactory::createCheese() {
  return std::make_shared<SpinachCheese>();
}

std::shared_ptr<Dough> NYPizzaIngredientFactory::createDough() {
  return std::make_shared<ThinCrustDough>();
}

std::shared_ptr<Sauce> NYPizzaIngredientFactory::createSauce() {
  return std::make_shared<MarinaraSauce>();
}