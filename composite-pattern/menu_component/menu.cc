#include "menu_component/menu.h"
#include "menu_component/null_menu.h"

#include <iostream>

Menu::Menu(const std::string_view name, const std::string_view description)
  : name_(name), description_(description) {}

std::shared_ptr<MenuComponent> Menu::getChild(int i) {
  if (i >= menu_componets_.size()) {
    return std::make_shared<NullMenu>();
  }

  return menu_componets_[i];
}

void Menu::add(std::shared_ptr<MenuComponent> menu_component) {
  menu_componets_.push_back(std::move(menu_component));
}

void Menu::remove(std::shared_ptr<MenuComponent> menu_component) {
  std::remove_if(menu_componets_.begin(), menu_componets_.end(), 
                 [menu_component = std::move(menu_component)](auto& iter) -> bool {
			 return iter->getPrice() == menu_component->getPrice();
		 });
}

void Menu::print() {
  std::cout << "\n" << getName();
  std::cout << ", " << getDescription();
  std::cout << " ---------------- \n";

  // 此处使用C++中相应的迭代器
  std::for_each(menu_componets_.begin(), menu_componets_.end(),
                [](auto& iterator) {
			iterator->print();
		});
}