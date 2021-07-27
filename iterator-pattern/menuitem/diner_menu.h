#pragma once

#include <vector>
#include <memory>
#include <string>

class MentItem;

// 该类中实现DinerMenu
// 该类采用array存放dinermenu
class DinerMenu {
public:
  using VectorMenu = std::vector<std::shared_ptr<MentItem>>;
private:
  int max_items_{6};
  int numberOffItems_{0};
  VectorMenu menu_items_;

public:
  explicit DinerMenu();
  void addItem(const std::string& name, const std::string& description, bool vegeration, double price);
  VectorMenu getItems() const {
    return menu_items_;
  }
};