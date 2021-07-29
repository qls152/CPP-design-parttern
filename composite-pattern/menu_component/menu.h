#pragma once

#include "menu_component/menu_component.h"

#include <memory>
#include <string>

// 菜单和菜单项均实现MenuComponent
class Menu : public MenuComponent {
private:
  ArrayList menu_componets_;
  std::string name_;
  std::string description_;

public:
  explicit Menu(const std::string_view name, const std::string_view description);
  virtual void add(std::shared_ptr<MenuComponent> menu_component) override;
  virtual void remove(std::shared_ptr<MenuComponent> menu_component) override;
  virtual std::shared_ptr<MenuComponent> getChild(int i) override;
  virtual const std::string& getName() const override {
    return name_;
  }
  virtual const std::string& getDescription() const override {
    return description_;	  
  }
  virtual void print() override;
};