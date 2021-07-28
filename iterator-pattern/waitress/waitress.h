#pragma once

#include <memory>

class PancakeHouseMenu;
class DinerMenu;
class Iterator;

// 此处定义测试class Waitress
// 主要参考HeadFirst中代码
class Waitress {
private:
  std::shared_ptr<PancakeHouseMenu> pancake_house_menu_;
  std::shared_ptr<DinerMenu> diner_menu_;

public:
  explicit Waitress(std::shared_ptr<PancakeHouseMenu> pancake_house_menu,
                    std::shared_ptr<DinerMenu> diner_menu)
    : pancake_house_menu_(std::move(pancake_house_menu)),
      diner_menu_(std::move(diner_menu)) {}
  void printMenu();

private:
  void printMenu(std::shared_ptr<Iterator> iteator);
};