//
// Author: Qin liansong
//
#include <iostream>
#include "display/currentconditiondisplay.h"

namespace observer_patern {

void CurrentConditionDisplay::update(
    float temperate,
    float humidity,
    float pressure) {
        this->templature = temperate;
        this->humidity = humidity;
        // 当update被调用时，我们把温度和湿度保存起来，然后调用display
        display();
    }

void CurrentConditionDisplay::display() {
    std::cout << "current condition: " << templature << std::endl;
    std::cout << "F degrees and" << humidity << std::endl;
}
}