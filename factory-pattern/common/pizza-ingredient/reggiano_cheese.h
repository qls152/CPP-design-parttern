#pragma once

#include "common/pizza-ingredient/cheese.h"

#include <iostream>

class ReggianoCheese : public Cheese {
public:
  virtual void printIngredientName() override {
    std::cout << "ReggianoCheese.\n";
  }
};