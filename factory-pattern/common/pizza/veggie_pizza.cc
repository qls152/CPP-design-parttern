#include "common/pizza/veggie_pizza.h"

#include <iostream>

void VeggiePizza::bake() {
  std::cout << pizza_name_.getPizzaName() << " bake. \n";
}

void VeggiePizza::box() {
  std::cout << pizza_name_.getPizzaName() << " box. \n";
}

void VeggiePizza::cut() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}

void VeggiePizza::prepare() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}