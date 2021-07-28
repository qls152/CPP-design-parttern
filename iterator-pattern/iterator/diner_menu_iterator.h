#pragma once 

#include "iterator/iterator.h"

#include <vector>

class MenuItem;
// 此处定义DinerMenu的迭代器
class DinerMenuIterator : public Iterator {
private:
  using VectorMenu = std::vector<std::shared_ptr<MenuItem>>;
  VectorMenu menu_items_;
  int position_{0};

public:
  explicit DinerMenuIterator(const VectorMenu menu_items) 
    : menu_items_(std::move(menu_items)) {}

  virtual std::shared_ptr<MenuItem> next() override;
  virtual bool hasNext() override;
};