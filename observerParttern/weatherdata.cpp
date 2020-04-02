//
// Created by qinliansong on 2020/4/2.
//

#include "weatherdata.h"

WeatherData::WeatherData() {

}

WeatherData::~WeatherData() {

}

void WeatherData::registerObserve(std::shared_ptr<Observe> o) {
    observes.push_back(o);
}

void WeatherData::removeObserve(std::shared_ptr<Observe> o) {
    for (auto& observer : observes) {
        if (observer == o) {
            observes.remove(observer);
        }
    }
}

void WeatherData::notifyObservers() {
    for (const auto& observe : observes) {
        observe->update(weatherdata);
    }
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasureMents(Data &weather_data) {
    weatherdata.humidity = weather_data.humidity;
    weatherdata.pressure = weather_data.pressure;
    weatherdata.temp = weather_data.temp;

    measurementsChanged();
}