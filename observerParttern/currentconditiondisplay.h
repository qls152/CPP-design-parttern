//
// Created by qinliansong on 2020/4/2.
//
#include <iostream>
#include "data.h"
#include "subject.h"
#include "observe.h"

#ifndef OBSERVERPARTTERN_CURRENTCONDITIONDISPLAY_H
#define OBSERVERPARTTERN_CURRENTCONDITIONDISPLAY_H


class CurrentConditionDisplay : public Observe {
private:

    Data _weather_data;
    const std::shared_ptr<Subject> _subject;

public:
    CurrentConditionDisplay(const std::shared_ptr<Subject> subject, Data &data);
    virtual ~CurrentConditionDisplay();

    void init();
    void update(Data& data) override;
    void display();
};


#endif //OBSERVERPARTTERN_CURRENTCONDITIONDISPLAY_H
