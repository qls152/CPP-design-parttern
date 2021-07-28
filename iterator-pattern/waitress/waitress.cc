#include "menuitem/diner_menu.h"
#include "menuitem/pancake_house_menu.h"
#include "iterator/iterator.h"
#include "menuitem/menu_item.h"

#include "waitress/waitress.h"

#include <iostream>

void Waitress::printMenu(std::shared_ptr<Iterator> iteator) {
  while (iteator->hasNext()) {
     auto menu_item = iteator->next();
     std::cout << menu_item->getName() + ", ";
     std::cout << std::to_string(menu_item->getPrice()) + " -- ";
     std::cout << menu_item->getDescription() << "\n";
  }	
}

void Waitress::printMenu() {
  auto panc_iterator = pancake_house_menu_->createIterator();
  auto diner_iterator = diner_menu_->createIterator();

  std::cout << "MENU\n---------\nBreakfast\n";
  printMenu(panc_iterator);
  std::cout << "LUNCH\n";
  printMenu(diner_iterator);
}