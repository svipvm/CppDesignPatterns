//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_OPERATECONTEXT_H
#define CPP_DESIGNPATTERNS_OPERATECONTEXT_H

#include <memory>
#include "OperateStrategy.h"
#include "AddStrategy.h"
#include "SubStrategy.h"
#include "MulStrategy.h"
#include "DivStrategy.h"

const unsigned int ADD = 1;
const unsigned int SUB = 2;
const unsigned int MUL = 3;
const unsigned int DIV = 4;

class OperateContext {
public:
    OperateContext(unsigned int type, float numberA, float numberB);
    float result();
private:
    std::shared_ptr<OperateStrategy> operateStrategy;
};


#endif //CPP_DESIGNPATTERNS_OPERATECONTEXT_H
