#include "caffeine_beverage_with_hook/caffeine_beverage_with_hook.h"

#include <iostream>

void CaffeineBeverageWithHook::prepareReciep() {
  boilWater();
  brew();
  pourInCup();
  if (customWantsCondiments()) {
    addCondiments();
  }
}

void CaffeineBeverageWithHook::boilWater() {
  std::cout << "Boiling Water....\n";
}

void CaffeineBeverageWithHook::pourInCup() {
  std::cout << "Pouring into cup...\n";
}