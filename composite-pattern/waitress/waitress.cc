#include "waitress/waitress.h"
#include "menu_component/menu_component.h"

#include <iostream>

void Waitress::printMenu() {
  menu_components_->print();
}