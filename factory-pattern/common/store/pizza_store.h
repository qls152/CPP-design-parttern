#include "simple-factory/simple_pizza_factory.h"

#include <string>
#include <memory>

// 此处定义PizzaStore
class PizzaStore {
private:
  std::shared_ptr<SimplePizzaFactory> factory_{};

public:
  PizzaStore(std::shared_ptr<SimplePizzaFactory> factory) : 
    factory_(std::move(factory)) {}
  std::shared_ptr<Pizza> orderPizza(const std::string& type) {
    auto pizza = factory_->createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
  }
};