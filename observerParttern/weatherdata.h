//
// Created by qinliansong on 2020/4/2.
//

#ifndef OBSERVERPARTTERN_WEATHERDATA_H
#define OBSERVERPARTTERN_WEATHERDATA_H

#include <list>

#include "subject.h"
#include "data.h"

class WeatherData : public Subject {
private:
    std::list<std::shared_ptr<Observe>> observes;
    Data weatherdata;
public:
    virtual ~WeatherData();
    WeatherData();
    virtual void registerObserve(std::shared_ptr<Observe> o);
    virtual void removeObserve(std::shared_ptr<Observe> o);
    virtual void notifyObservers();

    void measurementsChanged();
    void setMeasureMents(Data& weatherdata);

    const int getObserveSize() const {
        return observes.size();
    }
};


#endif //OBSERVERPARTTERN_WEATHERDATA_H
