#pragma once

#include "pizza-ingredient/sauce.h"

#include <iostream>

class PlumTomatoSauce : public Sauce {
public:
  virtual void printIngredientName() override {
    std::cout << "PlumTomatoSauce.\n";
  }
};