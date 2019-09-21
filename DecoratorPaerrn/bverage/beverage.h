//
// Created by qinliansong on 2019-09-21.
//

#ifndef HEADFIRST_C__BEVERAGE_H
#define HEADFIRST_C__BEVERAGE_H

#include <iostream>
#include <string>

class Beverage {
public:
    Beverage() {}
    Beverage(const std::string& description) : description(description) {}
    virtual  ~Beverage() {}
    virtual std::string getDescription();

    virtual double cost() =0;

public:
    std::string description = "Unknown Beverage";

};


#endif //HEADFIRST_C__BEVERAGE_H
