#pragma once

#include "common/pizza-ingredient/dough.h"

#include <iostream>

class ThinCrustDough : public Dough {
public:
  virtual void printIngredientName() override {
    std::cout << "ThinCrustDough.\n";
  }
};