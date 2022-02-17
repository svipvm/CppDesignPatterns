//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_DIVSTRATEGY_H
#define CPP_DESIGNPATTERNS_DIVSTRATEGY_H

#include "OperateStrategy.h"

class DivStrategy : public OperateStrategy {
public:
    DivStrategy(float numberA, float numberB);

    float result() override;
};


#endif //CPP_DESIGNPATTERNS_DIVSTRATEGY_H
