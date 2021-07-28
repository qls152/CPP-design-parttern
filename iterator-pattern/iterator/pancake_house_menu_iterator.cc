#include "iterator/pancake_house_menu_iterator.h"
#include "menuitem/menu_item.h"

std::shared_ptr<MenuItem> PancakeHouseMenuIterator::next() {
  auto menu_item = menu_items_.front();
  menu_items_.pop_front();
  return menu_item;
}

bool PancakeHouseMenuIterator::hasNext() {
   return !menu_items_.empty();
}