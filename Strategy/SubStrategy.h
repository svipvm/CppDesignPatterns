//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_SUBSTRATEGY_H
#define CPP_DESIGNPATTERNS_SUBSTRATEGY_H

#include "OperateStrategy.h"

class SubStrategy : public OperateStrategy {
public:
    SubStrategy(float numberA, float numberB);
    float result() override;
};


#endif //CPP_DESIGNPATTERNS_SUBSTRATEGY_H
