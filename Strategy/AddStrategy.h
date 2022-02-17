//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_ADDSTRATEGY_H
#define CPP_DESIGNPATTERNS_ADDSTRATEGY_H

#include "OperateStrategy.h"

class AddStrategy : public OperateStrategy {
public:
    AddStrategy(float numberA, float numberB);
    float result() override;
};


#endif //CPP_DESIGNPATTERNS_ADDSTRATEGY_H
