#include "factory/nypizza_store.h"
#include "factory/chicagostylepizza_store.h"

// 此文件用来测试工厂方法模式

int main() {
  std::shared_ptr<PizzaStore> ny_store = std::make_shared<NYPizaaStore>();
  std::shared_ptr<PizzaStore> chicago_store = std::make_shared<ChicagoStylePizaaStore>();

  ny_store->orderPizza("cheese");
  chicago_store->orderPizza("veggie");

  return 0;
}