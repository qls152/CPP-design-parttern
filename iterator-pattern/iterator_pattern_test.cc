#include "menuitem/diner_menu.h"
#include "menuitem/pancake_house_menu.h"
#include "waitress/waitress.h"

int main() {
  auto pancake_menuitem = std::make_shared<PancakeHouseMenu>();
  auto diner_menuitem = std::make_shared<DinerMenu>();

  Waitress waittree(pancake_menuitem, diner_menuitem);
  waittree.printMenu();

  return 0;
}