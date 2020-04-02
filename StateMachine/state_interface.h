//
// Created by qinliansong on 2020/3/21.
//

#ifndef STATEMACHINE_STATE_INTERFACE_H
#define STATEMACHINE_STATE_INTERFACE_H

class State {
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;

    virtual ~State() {};

};

#endif //STATEMACHINE_STATE_INTERFACE_H
