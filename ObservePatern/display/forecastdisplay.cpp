//
// Author: Qin liansong
//
#include <iostream>
#include "display/forecastdisplay.h"

namespace observer_patern {

void ForeCastDisplay::update(
    float temperate,
    float humidity,
    float pressure) {
        this->templature = temperate;
        this->humidity = humidity;
        // 当update被调用时，我们把温度和湿度保存起来，然后调用display
        display();
    }

void ForeCastDisplay::display() {
    std::cout << "forecast condition: " << templature << std::endl;
    std::cout << "forecast F degrees and" << humidity << std::endl;
}
}