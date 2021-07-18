#pragma once

#include "common/pizza/cheese_pizza.h"
#include "common/pizza/veggie_pizza.h"

#include <memory>

// 此处定义简单工厂模式
class SimplePizzaFactory {
public:
  std::shared_ptr<Pizza> createPizza(std::string type) {
    std::shared_ptr<Pizza> pizza{};

    if (type == "cheese") {
	   pizza = std::make_shared<CheesePizza>();
    }

    if (type == "veggie") {
	   pizza = std::make_shared<VeggiePizza>();
    }

    return pizza;
  }
};