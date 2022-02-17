//
// Created by SvipVM on 2022/2/6.
//

#include "AddStrategy.h"

AddStrategy::AddStrategy(float numberA, float numberB) :
    OperateStrategy(numberA, numberB) {  }

float AddStrategy::result() {
    return numberA + numberB;
}
