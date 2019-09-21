
#include <iostream>

#include "bverage/espresso.h"
#include "bverage/houseblend.h"

#include "decorator/mocha.h"
#include "decorator/soy.h"
#include "decorator/whip.h"


int main() {

    // 定一杯Espresso，不需要调料，打印出描述和价格
    Beverage* beverage(new Espresso);
    std::cout << beverage->getDescription() + " $" << beverage->cost() << std::endl;


    // 制造出一个HouseBlend对象
    Beverage* beverage2(new HouseBlend);

    // 用mocha装饰
    beverage2 = new Mocha(beverage2);
    // 用第二个mocha装饰
    beverage2 = new Mocha(beverage2);
    // 用whip装饰
    beverage2 = new Whip(beverage2);

    std::cout << beverage2->getDescription() + " $" << beverage2->cost() << std::endl;

    delete beverage;
    delete beverage2;

    return 0;
}