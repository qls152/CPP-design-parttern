//
// Created by qinliansong on 2020/4/2.
//

#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay(
        const std::shared_ptr<Subject> subject,
        Data& data)
        : _subject(subject), _weather_data(data) {
}

ForecastDisplay::~ForecastDisplay() {

}

void ForecastDisplay::init() {
    _subject->registerObserve(std::shared_ptr<Observe>(this));
}

void ForecastDisplay::update(Data &data) {
    _weather_data.temp = data.temp;
    _weather_data.pressure = data.pressure;
    _weather_data.humidity = data.humidity;

    display();
}

void ForecastDisplay::display() {
    std::cout << "forecast condition: " << _weather_data.temp << std::endl;
    std::cout << "forecast F degrees and" << _weather_data.humidity << std::endl;
}