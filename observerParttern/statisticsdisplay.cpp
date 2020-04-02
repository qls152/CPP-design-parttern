//
// Created by qinliansong on 2020/4/2.
//

#include "statisticsdisplay.h"

StatisticsDisplay::StatisticsDisplay(
        const std::shared_ptr<Subject> subject,
        Data &data)
        : _subject(subject), _weather_data(data) {

}

StatisticsDisplay::~StatisticsDisplay() {

}

void StatisticsDisplay::init() {
    _subject->registerObserve(std::shared_ptr<Observe>(this));
}

void StatisticsDisplay::update(Data &data) {
    _weather_data.temp = data.temp;
    _weather_data.pressure = data.pressure;
    _weather_data.humidity = data.humidity;

    display();
}

void StatisticsDisplay::display() {
    std::cout << "Statistics condition: " << _weather_data.temp << std::endl;
    std::cout << "Statistics F degrees and" << _weather_data.humidity << std::endl;
}