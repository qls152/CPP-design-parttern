#pragma once

#include <memory>

class MenuComponent;

// 此处定义测试class Waitress
// 主要参考HeadFirst中代码
class Waitress {
private:
  std::shared_ptr<MenuComponent> menu_components_{};

public:
  explicit Waitress(std::shared_ptr<MenuComponent> menu_components)
    : menu_components_(std::move(menu_components)) {}
  void printMenu();
};