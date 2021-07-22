#pragma once

#include "common/pizza-ingredient/cheese.h"

#include <iostream>

class SpinachCheese : public Cheese {
public:
  virtual ~SpinachCheese() = default;
  virtual void printIngredientName() override {
    std::cout << "SpinachCheese.\n";
  }
};