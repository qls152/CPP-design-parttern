#pragma once

#include "pizza-ingredient/dough.h"

#include <iostream>

class ThickCrustDough : public Dough {
public:
  virtual void printIngredientName() override {
    std::cout << "ThickCrustDough.\n";
  }
};