#include "coffee_and_tea/coffee_with_hook.h"
#include "coffee_and_tea/tea_with_hook.h"

#include <memory>

int main() {
  auto coffee_with_hook = std::make_shared<CoffeeWithHook>();
  auto tea_with_hook = std::make_shared<TeaWithHook>();

  coffee_with_hook->prepareReciep();
  tea_with_hook->prepareReciep();

  return 0;
}