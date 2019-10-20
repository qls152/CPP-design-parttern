//
// Created by qinliansong on 2019/10/6.
//

#include "chocolaterboiler.h"

std::unique_ptr<ChocolaterBoiler> ChocolaterBoiler::getInstance() {
    if (uniqueInstance == nullptr) {
        uniqueInstance = std::move(std::unique_ptr<ChocolaterBoiler>(new ChocolaterBoiler));
    }
    return std::move(uniqueInstance);
}

void ChocolaterBoiler::fill() {
    if (isEmpty()) {
        empty = false;
        boiled = false;

        // 在锅炉填充巧克力和牛奶的混合物
    }
}

void ChocolaterBoiler::drain() {
    if (!isEmpty() && isBoiled()) {
        // 排出煮沸的巧克力和牛奶
        empty = true;
    }
}

void ChocolaterBoiler::boil() {
    if (!isEmpty() && !isBoiled()) {
        // 将炉内物煮沸
        boiled =  true;
    }
}

bool ChocolaterBoiler::isEmpty() {
    return empty;
}

bool ChocolaterBoiler::isBoiled() {
    return boiled;
}