//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_MULSTRATEGY_H
#define CPP_DESIGNPATTERNS_MULSTRATEGY_H

#include "OperateStrategy.h"

class MulStrategy : public OperateStrategy {
public:
    MulStrategy(float numberA, float numberB);
    float result() override;
};


#endif //CPP_DESIGNPATTERNS_MULSTRATEGY_H
