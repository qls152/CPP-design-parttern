#include <iostream>
#include "espresso.h"
#include "houseblend.h"

#include "mocha.h"
#include "soy.h"
#include "whip.h"

int main() {
    std::shared_ptr<Beverage> beverage(new Espresso);
    std::cout << beverage->getDescription() + " $" << beverage->cost() << std::endl;

    beverage.reset(new Houseblend);

    std::shared_ptr<Beverage> bev(new Mocha(beverage));
    bev.reset(new Mocha(bev));
    bev.reset(new Whip(bev));

    std::cout << bev->getDescription() + " $" << bev->cost() << std::endl;

     return 0;
}
