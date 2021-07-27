#include "caffeine_beverage_with_hook/caffeine_beverage_with_hook.h"

class TeaWithHook : public CaffeineBeverageWithHook {
public:
  TeaWithHook() = default;
  virtual void brew() override;
  virtual void addCondiments() override;
  virtual bool customWantsCondiments() override;

private:
  void learnTea();
};