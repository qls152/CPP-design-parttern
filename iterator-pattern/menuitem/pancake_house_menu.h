#pragma once

#include <list>
#include <memory>
#include <string>

class MenuItem;
class Iterator;
// 此处实现Lou煎饼屋菜单实现
// 其用std::list扩展菜单
// note: 其实可以针对接口编程，本部分为了实现迭代器模式，便与书上保持一致
// 需要记得这种写法可以优化
class PancakeHouseMenu {
public:
  using ArrayList = std::list<std::shared_ptr<MenuItem>>;
private:
  ArrayList menu_items_;
public:
  explicit PancakeHouseMenu();
  void addItem(const std::string& name, const std::string& description, bool vegeration, double price);
  // 保留原生接口
  ArrayList getItems() const {
    return menu_items_;
  }

  std::shared_ptr<Iterator> createIterator();
};
