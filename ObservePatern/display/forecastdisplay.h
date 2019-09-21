//
// Author: qin liansong
//
#ifndef OBSERVERPATER_FORECASTDISPLAY_H
#define OBSERVERPATER_FORECASTDISPLAY_H
#include <iostream>
#include <memory>

#include "displayelement/displayelement.h"
#include "observe/observer.h"
#include "subject/subject.h"
#include "weatherdata/weatherdata.h"

namespace observer_patern {
class ForeCastDisplay : 
public observer_patern::Observer, public observer_patern::DisplayElement {
private:
    float templature;
    float humidity;
    typedef observer_patern::WeatherData* subject;
    subject weatherData;
    
public:
    ForeCastDisplay(subject weatherdat) 
    : weatherData(weatherdat) {
        // std::unique_ptr<observer_patern::Observer> this_object(std::move(this));
        // weatherData->get()->registerObserver(&this_object);
        weatherData->registerObserver(this);
    }
    virtual ~ForeCastDisplay() {
        delete weatherData;
    }
    
    void update(float temperature, float humidity, float pressure) override;

    void display() override;

};
}
#endif