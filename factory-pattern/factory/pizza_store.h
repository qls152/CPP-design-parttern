#pragma once

#include "common/pizza/pizza.h"

#include <memory>
#include <string>

class PizzaStore {
public:
  std::shared_ptr<Pizza> orderPizza(const std::string& type) {
    auto pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;	  
  }

private:
 // 现在把工厂对象移动到这个接口中来
 virtual std::shared_ptr<Pizza> createPizza(const std::string& type) = 0;
};