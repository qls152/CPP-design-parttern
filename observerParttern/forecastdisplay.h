//
// Created by qinliansong on 2020/4/2.
//

#ifndef OBSERVERPARTTERN_FORECASTDISPLAY_H
#define OBSERVERPARTTERN_FORECASTDISPLAY_H

#include <iostream>
#include "observe.h"
#include "subject.h"
#include "data.h"

class ForecastDisplay : public Observe {
private:
    Data _weather_data;
    const std::shared_ptr<Subject> _subject;

public:
    ForecastDisplay(const std::shared_ptr<Subject> subject, Data& data);
    virtual ~ForecastDisplay();

    void init();
    void update(Data& data) override ;
    void display();
};


#endif //OBSERVERPARTTERN_FORECASTDISPLAY_H
