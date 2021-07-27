#pragma once

#include <memory>
#include <string>

class Item;
//此处定义MenuItem，主要参考自HeadFirst设计模式中迭代器模式一节
class MenuItem {
private:
  std::shared_ptr<Item> item_{};

public:
  MenuItem(const std::string_view name, const std::string_view description,
           bool vegetarian, double price);

  const std::string& getName() const;
  const std::string& getDescription() const;
  const double getPrice() const;
  const bool isVegetarian() const;
};