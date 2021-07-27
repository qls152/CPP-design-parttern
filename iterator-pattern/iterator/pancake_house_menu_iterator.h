#pragma once

#include "iterator/iterator.h"

#include <list>

// note: C++STL 中各个容器的迭代器定义在相应的容器内
// note: 本部分并非这样 而是定义在其外，主要与HeadFirst保持一致
class PancakeHouseMenuIterator : public Iterator {
private:
   using ArrayList = std::list<std::shared_ptr<MenuItem>>;
   ArrayList menu_items_;

public:
  explicit PancakeHouseMenuIterator(ArrayList menu_item)
     : menu_items_(std::move(menu_items)) {}

  virtual std::shared_ptr<MenuItem> next() override;
  virtual bool hasNext() override;
};