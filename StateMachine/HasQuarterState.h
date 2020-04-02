//
// Created by qinliansong on 2020/3/21.
//

#ifndef STATEMACHINE_HASQUARTERSTATE_H
#define STATEMACHINE_HASQUARTERSTATE_H

#include "GUmballMachine.h"
#include "state_interface.h"
#include <iostream>

class HasQuarterState : public State {
public:
    HasQuarterState(GUmballMachine& gUmballMachine1) :
    _gUmballMachine(gUmballMachine1) {

    };
    virtual ~HasQuarterState() {}

    virtual void insertQuarter() {
        std::cout << " You can't inserted a quater" << std::endl;
    }
    virtual void ejectQuarter() {
        std::cout << " Quarter returned" << std::endl;
        _gUmballMachine.setState(_gUmballMachine.getNoQuarterState());
    }
    virtual void turnCrank() {
        std::cout << " You turned ..." << std::endl;
        _gUmballMachine.setState(_gUmballMachine.getSoldState());
    }

    virtual void dispense() {
        std::cout << " No gumball dispendsed" << std::endl;
    }

private:
    GUmballMachine _gUmballMachine;

};


#endif //STATEMACHINE_HASQUARTERSTATE_H
