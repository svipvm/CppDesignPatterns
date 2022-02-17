//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_CAR_H
#define CPP_DESIGNPATTERNS_CAR_H

#include <iostream>

class Car {
public:
    explicit Car(float price_ = 0);
    virtual void show() = 0;

protected:
    float price;
};


#endif //CPP_DESIGNPATTERNS_CAR_H
