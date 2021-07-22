#pragma once

#include "common/pizza-ingredient/cheese.h"

#include <iostream>

class ReggianoCheese : public Cheese {
public:
  virtual ~ReggianoCheese() = default;
  virtual void printIngredientName() override {
    std::cout << "ReggianoCheese.\n";
  }
};