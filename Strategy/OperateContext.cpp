//
// Created by SvipVM on 2022/2/6.
//

#include "OperateContext.h"

OperateContext::OperateContext(unsigned int type, float numberA, float numberB) {
    switch (type) {
        case ADD:
            operateStrategy = std::make_shared<AddStrategy>(numberA, numberB);
            break;
        case SUB:
            operateStrategy = std::make_shared<SubStrategy>(numberA, numberB);
            break;
        case MUL:
            operateStrategy = std::make_shared<MulStrategy>(numberA, numberB);
            break;
        case DIV:
            operateStrategy = std::make_shared<DivStrategy>(numberA, numberB);
            break;
        default:
            break;
    }
}

float OperateContext::result() {
    return operateStrategy->result();
}
