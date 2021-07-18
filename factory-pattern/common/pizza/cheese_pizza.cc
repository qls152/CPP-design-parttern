#include "common/pizza/cheese_pizza.h"

#include <iostream>

void CheesePizza::bake() {
  std::cout << pizza_name_.getPizzaName() << " bake. \n";
}

void CheesePizza::box() {
  std::cout << pizza_name_.getPizzaName() << " box. \n";
}

void CheesePizza::cut() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}

void CheesePizza::prepare() {
  std::cout << pizza_name_.getPizzaName() << " cut. \n";	
}