#include "iterator/pancake_house_menu_iterator.h"
#include "menuitem/menu_item.h"

std::shared_ptr<MenuItem> PancakeHouseMenuIterator::next() {
  return menu_items_.pop_front();
}

bool PancakeHouseMenuIterator::hasNext() {
   return !menu_items_.empty();
}