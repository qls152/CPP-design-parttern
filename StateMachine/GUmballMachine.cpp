//
// Created by qinliansong on 2020/3/17.
//

#include "GUmballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"

GUmballMachine::GUmballMachine(int numberGumballs) : _count(numberGumballs) {

}

void GUmballMachine::init() {
    _noQuarterState = std::make_shared<NoQuarterState>(*this);
    _hasQuarterSter = std::make_shared<HasQuarterState>(*this);
    _soldState = std::make_shared<SoldState>(*this);
    _soldOutState = std::make_shared<SoldOutState>(*this);
    _state = _soldState;
}

void GUmballMachine::insertQuarter() {
    _state->insertQuarter();
}

void GUmballMachine::ejectQuarter() {
    _state->ejectQuarter();
}

void GUmballMachine::turnCrank() {
    _state->turnCrank();
    _state->dispense();
}

void GUmballMachine::setState(std::shared_ptr<State> state) {
    _state = state;
}

void GUmballMachine::releaseBall() {
    std::cout << "A gumball comes rolling out the slot...." << std::endl;
    if (_count != 0) {
        _count--;
    }
}