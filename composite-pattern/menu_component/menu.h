#pragma once

#include "menu_component/menu_component.h"

#include <list>
#include <memory>
#include <string>

// 菜单和菜单项均实现MenuComponent
class Menu : public MenuComponent {
private:
  using ArrayList = std::list<std::shared_ptr<MenuComponent>>;
  ArrayList menu_componets_;
  std::string name_;
  std::string description_;
  
};