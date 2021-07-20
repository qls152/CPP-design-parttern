#pragma once

#include "pizza-ingredient/sauce.h"

#include <iostream>

class MarinaraSauce : public Sauce {
public:
  virtual void printIngredientName() override {
    std::cout << "MarinaraSauce.\n";
  }
};