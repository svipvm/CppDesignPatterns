//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_FERRARICAR_H
#define CPP_DESIGNPATTERNS_FERRARICAR_H

#include "Car.h"

class FerrariCar : public Car {
public:
    explicit FerrariCar(float price_ = 200);
    void show() override;
};


#endif //CPP_DESIGNPATTERNS_FERRARICAR_H
