#pragma once

#include "pizza-ingredient/cheese.h"

#include <iostream>

class SpinachCheese : public Cheese {
public:
  virtual void printIngredientName() override {
    std::cout << "SpinachCheese.\n";
  }
};