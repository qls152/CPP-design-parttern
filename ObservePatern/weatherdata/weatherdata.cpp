//
// Author: Qin liansong
//
#include "weatherdata/weatherdata.h"

namespace observer_patern {

void WeatherData::registerObserver(const observer_patern::Subject::observer o) {
    observers.push_back(o);
}

// 观察者注销
void WeatherData::removeObserver(const observer_patern::Subject::observer o) {
    for (auto iteor = observers.begin(); iteor != observers.end(); ++iteor) {
        if (*iteor == o) {
            observers.erase(iteor);
        }
    }
}

void WeatherData::notifyObservers() {
    for (auto iteor = observers.begin(); iteor != observers.end(); ++iteor) {
        (*iteor)->update(temperature, humidity, pressure);
        // iteor->get()->update(temperature, humidity, pressure);
    }
}
// 当从气象站得到更新的观测值时，我们通知观察者
void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasureMents(const float temperture, const float humidity, const float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}
// 其他方法
}