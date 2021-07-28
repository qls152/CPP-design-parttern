#pragma once

#include <string>

// 此处定义Items的集合
// 主要尝试一下C++中Pimpl手法
class Item {
private:
  std::string name_;
  std::string description_;
  bool vegetarian_{false};
  double price_{0.0};

public:
 Item(const std::string_view name, const std::string_view description,
      bool vegetarian, double price)
  : name_(name), description_(description),
    vegetarian_(vegetarian), price_(price) {}

  const std::string& getName() const {
    return name_;
  }

  const std::string& getDescription() const {
    return description_;
  }

  const double getPrice() const {
    return price_;
  }

  const bool isVegetarian() const {
    return vegetarian_;
  } 
};