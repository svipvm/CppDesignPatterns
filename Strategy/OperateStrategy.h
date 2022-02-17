//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_OPERATESTRATEGY_H
#define CPP_DESIGNPATTERNS_OPERATESTRATEGY_H

class OperateStrategy {
public:
    OperateStrategy(float numberA_, float numberB_);
    virtual float result() = 0;

protected:
    float numberA;
    float numberB;
};


#endif //CPP_DESIGNPATTERNS_OPERATESTRATEGY_H
