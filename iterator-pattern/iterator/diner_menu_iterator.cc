#include "iterator/diner_menu_iterator.h"
#include "menuitem/menu_item.h"

std::shared_ptr<MenuItem> DinerMenuIterator::next() {
  auto menu_item = menu_items_[position_];
  ++position_;
  return menu_item;
}

bool DinerMenuIterator::hasNext() {
  if (position_ >= menu_items_.size() 
      || menu_items_[position_] == nullptr) {
    return false;
  }

  return true;
}