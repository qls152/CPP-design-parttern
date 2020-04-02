//
// Created by qinliansong on 2020/4/2.
//

#include "currentconditiondisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(
        const std::shared_ptr<Subject> subject,
        Data& data) :
        _subject(subject), _weather_data(data) {
}

CurrentConditionDisplay::~CurrentConditionDisplay() {

}

void CurrentConditionDisplay::init() {
    _subject->registerObserve(std::shared_ptr<Observe>(this));
}

void CurrentConditionDisplay::update(Data &data) {
    _weather_data.temp = data.temp;
    _weather_data.pressure = data.pressure;
    _weather_data.humidity = data.humidity;

    display();
}

void CurrentConditionDisplay::display() {
    std::cout << "current condition: " << _weather_data.temp << std::endl;
    std::cout << "F degrees and" << _weather_data.humidity << std::endl;
}