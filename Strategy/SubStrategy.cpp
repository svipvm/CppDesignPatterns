//
// Created by SvipVM on 2022/2/6.
//

#include "SubStrategy.h"

SubStrategy::SubStrategy(float numberA, float numberB) :
    OperateStrategy(numberA, numberB) {  }

float SubStrategy::result() {
    return numberA - numberB;
}
