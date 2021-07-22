#pragma once

#include "common/pizza-ingredient/sauce.h"

#include <iostream>

class MarinaraSauce : public Sauce {
public:
  virtual ~MarinaraSauce() = default;
  virtual void printIngredientName() override {
    std::cout << "MarinaraSauce.\n";
  }
};