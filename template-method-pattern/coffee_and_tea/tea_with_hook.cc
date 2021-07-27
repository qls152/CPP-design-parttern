#include "coffee_and_tea/tea_with_hook.h"

#include <iostream>

void TeaWithHook::addCondiments() {
  std::cout << "Adding sugar to Tea...\n";
}

void TeaWithHook::brew() {
  std::cout << "Boiling Water for Tea...\n";
}

// 此处均可根据自己喜好随便设置
bool TeaWithHook::customWantsCondiments() {
  learnTea();
  return true;
}

void TeaWithHook::learnTea() {
  std::cout << "add learn tea interface...\n";
}