//
// Author: Qin liansong
//
#include <iostream>
#include "display/statisticsdisply.h"

namespace observer_patern {

void StatisticsDisplay::update(
    float temperate,
    float humidity,
    float pressure) {
        this->templature = temperate;
        this->humidity = humidity;
        // 当update被调用时，我们把温度和湿度保存起来，然后调用display
        display();
    }

void StatisticsDisplay::display() {
    std::cout << "Statistics condition: " << templature << std::endl;
    std::cout << "Statistics F degrees and" << humidity << std::endl;
}
}