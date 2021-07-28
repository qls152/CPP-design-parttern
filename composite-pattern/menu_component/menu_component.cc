#include "menu_component/menu_component.h"

#include <iostream>

MenuComponent::~MenuComponent() {}

void MenuComponent::add() {
  init();
}

std::shared_ptr<MenuComponent> MenuComponent::getChild(int i) {
  init();
}

void MenuComponent::remove(std::shared_ptr<MenuComponent> menu_component) {
  init();
}

const std::string& MenuComponent::getName() const {
  init();
  static std::string error = "error";
  return error;
}

const std::string& MenuComponent::getDescription() const {
  init();
  static std::string error = "error";
  return error;
}

const double MenuComponent::getPrice() const {
  init();
  return 0.0;
}

const bool MenuComponent::isVegetarian() const  {
  init();
  return false;
}

void MenuComponent::print() {
  init();
}

void MenuComponent::init() {
  std::cout << "Unknown...\n";
}