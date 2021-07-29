#pragma once

#include "menu_component/menu_component.h"

#include <memory>
#include <string>

// 菜单和菜单项均实现MenuComponent
class NullMenu : public MenuComponent {
public:
  virtual ~NullMenu() = default;
};