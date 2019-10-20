//
// Author:qinliansong
//

#include "duck.h"

namespace duck {

void BaseDuck::performFly() {
    flybehavior->fly();
}

void BaseDuck::performQuack() {
    quackbehavior->quack();
}

void BaseDuck::swim() {
    std::cout << "这是鸭子游泳" << std::endl;
}
}