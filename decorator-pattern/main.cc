#include <iostream>

#include "beverage/espresso.h"
#include "beverage/houseblend.h"

#include "condiment_decorator/mocha.h"
#include "condiment_decorator/soy.h"
#include "condiment_decorator/whip.h"

int main() {
  std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
  std::cout << beverage->getDescription() <<  " $"  <<  beverage->cost() << "\n";

  beverage = std::make_shared<Mocha>(beverage);
  beverage = std::make_shared<Mocha>(beverage);
  beverage = std::make_shared<Whip>(beverage);
  std::cout << beverage->getDescription() <<  " $"  <<  beverage->cost() << "\n";

  beverage = std::make_shared<HouseBlend>();
  beverage = std::make_shared<Soy>(beverage);
  beverage = std::make_shared<Mocha>(beverage);
  beverage = std::make_shared<Whip>(beverage);
  std::cout << beverage->getDescription() <<  " $"  <<  beverage->cost() << "\n";
  
  return 0;
}