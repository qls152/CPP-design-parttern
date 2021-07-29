#pragma once

#include <memory>
#include <string>
#include <vector>

// 定义MenuComponent接口，所有组件均需要实现该接口
// 叶节点和组合节点角色不同，所以有些方法不适合某种节点
// 面对这种情况，均输出"Unknown".
// note: HeadFirst中为抛出异常，本部分为了简化，均输出字符串
// 关于组合模式实现的详细架构图，可参考HeadFirst书
class MenuComponent {
public:
  virtual ~MenuComponent() = 0;
  virtual void add(std::shared_ptr<MenuComponent> menu_component);
  virtual void remove(std::shared_ptr<MenuComponent> menu_component);
  virtual std::shared_ptr<MenuComponent> getChild(int i);
  virtual const std::string& getName() const;
  virtual const std::string& getDescription() const;
  virtual const double getPrice() const;
  virtual const bool isVegetarian() const;
  virtual void print();

private:
  void init() const;
};

using ArrayList = std::vector<std::shared_ptr<MenuComponent>>;