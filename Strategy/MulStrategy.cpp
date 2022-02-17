//
// Created by SvipVM on 2022/2/6.
//

#include "MulStrategy.h"

MulStrategy::MulStrategy(float numberA, float numberB) :
    OperateStrategy(numberA, numberB) {  }

float MulStrategy::result() {
    return numberA * numberB;
}
