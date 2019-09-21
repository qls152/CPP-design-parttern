//
// Author:qinliansong
//

#include "duck.h"

namespace duck {
void BaseDuck::quack() {
    std::cout << "这是鸭子呱呱叫" << std::endl;
}

void BaseDuck::swim() {
    std::cout << "这是鸭子游泳" << std::endl;
}
}