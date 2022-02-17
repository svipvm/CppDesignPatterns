//
// Created by SvipVM on 2022/2/6.
//

#include "DivStrategy.h"
#include <iostream>

DivStrategy::DivStrategy(float numberA, float numberB) :
    OperateStrategy(numberA, numberB) {  }

float DivStrategy::result() {
    if (numberB == 0) {
        std::cout << " error: div number is zero.";
    }
    return numberA / numberB;
}
