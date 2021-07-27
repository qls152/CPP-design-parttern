#include "caffeine_beverage_with_hook/caffeine_beverage_with_hook.h"

class CoffeeWithHook : public CaffeineBeverageWithHook {
public:
  CoffeeWithHook() = default;
  virtual void brew() override;
  virtual void addCondiments() override;
  virtual bool customWantsCondiments() override;

private:
  void getUserInput();
};