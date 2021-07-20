#pragma once

#include "common/pizza-ingredient/dough.h"

#include <iostream>

class ThickCrustDough : public Dough {
public:
  virtual void printIngredientName() override {
    std::cout << "ThickCrustDough.\n";
  }
};