#include "menuitem/pancake_house_menu.h"
#include "menuitem/menu_item.h"
#include "iterator/pancake_house_menu_iterator.h"

// 为了与HeadFirst书中保持一致
// 这种写法在实际工程并不可取
// 为了偷懒，此处只add 2 items
PancakeHouseMenu::PancakeHouseMenu() {
  addItem("K&B's Pancake Breakfast", 
          "Pancakes with scrambled eggs, and toast",
          true,
          2.99);
  addItem("Regular Pancake Breakfast", 
          "Pancakes with fried eggs, sausage",
          false,
          3.99);
}

void PancakeHouseMenu::addItem(const std::string& name, const std::string& description, 
                          bool vegeration, double price) {
  menu_items_.push_back(std::make_shared<MenuItem>(name, description, vegeration, price));
}

std::shared_ptr<Iterator> PancakeHouseMenu::createIterator() {
  return std::make_shared<PancakeHouseMenuIterator>(menu_items_);
}