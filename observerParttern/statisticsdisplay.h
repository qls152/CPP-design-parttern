//
// Created by qinliansong on 2020/4/2.
//

#ifndef OBSERVERPARTTERN_STATISTICSDISPLAY_H
#define OBSERVERPARTTERN_STATISTICSDISPLAY_H

#include <iostream>

#include "data.h"
#include "observe.h"
#include "subject.h"

class StatisticsDisplay : public Observe {
private:
    Data _weather_data;
    const std::shared_ptr<Subject> _subject;
public:
    StatisticsDisplay(const std::shared_ptr<Subject> subject, Data& data);
    virtual ~StatisticsDisplay();

    void init();
    void update(Data& data) override;
    void display();
};


#endif //OBSERVERPARTTERN_STATISTICSDISPLAY_H
