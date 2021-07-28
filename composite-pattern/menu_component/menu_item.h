#pragma once

#include "menu_component/menu_component.h"

#include <memory>

class Item;
class MenuItem : public MenuComponent {
private:
  std::shared_ptr<Item> item_{};

public:
  MenuItem(const std::string_view name, const std::string_view description,
           bool vegetarian, double price);

  const std::string& getName() const;
  const std::string& getDescription() const;
  const double getPrice() const;
  const bool isVegetarian() const;
  void print() override;
};