#include "waitress/waitress.h"
#include "menu_component/menu_item.h"
#include "menu_component/menu.h"

int main() {
  auto pancake_house_menu = std::make_shared<Menu>("PANCAKE HOUSE MENU", "Breakfast");
  auto diner_menu = std::make_shared<Menu>("DINER MENU", "Lunch");
  auto cafe_menu = std::make_shared<Menu>("CAFE MENU", "Dinner");
  auto dessert_menu = std::make_shared<Menu>("DESSERT MENU", "dessert of course!");

  auto all_menus = std::make_shared<Menu>("ALL MENUS", "ALL menus combined");

  diner_menu->add(std::make_shared<MenuItem>(
	  "Pasta",
	  "Spaghetti with Marinara Sauce, and a slice of sourugh bread",
	  true,
	  2.99
  ));
  
  diner_menu->add(dessert_menu);
  dessert_menu->add(std::make_shared<MenuItem>(
	  "Apple Pie",
	  "Apple pie with a flakey crust, topped with.....",
	  true,
	  3.99));
  all_menus->add(pancake_house_menu);
  all_menus->add(diner_menu);
  all_menus->add(cafe_menu);

  Waitress waitress(all_menus);
  waitress.printMenu();

  return 0;
}