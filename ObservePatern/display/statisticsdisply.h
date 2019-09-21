//
// Author: qin liansong
//
#ifndef OBSERVERPATER_STATISTICSDISPLAY_H
#define OBSERVERPATER_STATISTICSDISPLAY_H
#include <iostream>
#include <memory>

#include "displayelement/displayelement.h"
#include "observe/observer.h"
#include "subject/subject.h"
#include "weatherdata/weatherdata.h"
namespace observer_patern {
class StatisticsDisplay : 
public observer_patern::Observer, public observer_patern::DisplayElement {
private:
    float templature;
    float humidity;
    typedef observer_patern::WeatherData* subject;
    subject weatherData;

public:
    StatisticsDisplay(subject weatherdata) 
    : weatherData(weatherdata) {
        // std::unique_ptr<observer_patern::Observer> this_object(this);
        // weatherData->get()->registerObserver(&this_object);
        weatherData->registerObserver(this);
    }
    virtual ~StatisticsDisplay() {
        delete weatherData;
    }

    void update(float temperature, float humidity, float pressure) override;

    void display() override;
};
}
#endif