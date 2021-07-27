#include "coffee_and_tea/coffee_with_hook.h"

#include <iostream>

void CoffeeWithHook::brew() {
  std::cout << "Dripping Coffee through filter...\n";
}

void CoffeeWithHook::addCondiments() {
  std::cout << "Adding sugar and milk..\n";
}

// 为了简化，本接口未完全实现HeadFirst书中功能
// 若感兴趣可自己实现
bool CoffeeWithHook::customWantsCondiments() {
  getUserInput();
  return true;
}

void CoffeeWithHook::getUserInput() {
  std::cout << "Coffee with Hook get User Input...\n";
}