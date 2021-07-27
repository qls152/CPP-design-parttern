#include "menuitem/diner_menu.h"
#include "menuitem/menu_item.h"

// 为了与HeadFirst书中保持一致
// 这种写法在实际工程并不可取
// 为了偷懒，此处只add 2 items
DinerMenu::DinerMenu() {
  addItem("Vegetarian BLT", 
          "(Fakin') Bacon with lettuce & tomato on whole wheat",
          true,
          2.99);
  addItem("BLT", 
          "Bacon with lettuce & tomato on whole wheat",
          false,
          3.99);
}

void DinerMenu::addItem(const std::string& name, const std::string& description, 
                          bool vegeration, double price) {
  if (numberOffItems_ >= max_items_) return;
  ++numberOffItems_;
  menu_items_.push_back(std::make_shared<MenuItem>(name, description, vegeration, price));
}
