#include "menu_component/menu_item.h"
#include "menu_component/item.h"

#include <iostream>

MenuItem::MenuItem(const std::string_view name, const std::string_view description,
                   bool vegetarian, double price)
  : item_(std::make_shared<Item>(name, description, vegetarian, price)) {}

const std::string& MenuItem::getDescription() const {
  return item_->getDescription();
}

const std::string&  MenuItem::getName() const {
  return item_->getName();
}

const double MenuItem::getPrice() const {
  return item_->getPrice();
}

const bool MenuItem::isVegetarian() const {
  return item_->isVegetarian();
}

void MenuItem::print() {
  std::cout << " " << getName();
  if (isVegetarian()) {
    std::cout << "(V)";
  }

  std::cout << ", " << std::to_string(getPrice());
  std::cout << " -----  " << getDescription() << "\n";
}