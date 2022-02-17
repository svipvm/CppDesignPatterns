//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_BENTLEYCAR_H
#define CPP_DESIGNPATTERNS_BENTLEYCAR_H

#include "Car.h"

class BentleyCar : public Car {
public:
    explicit BentleyCar(float price_ = 100);
    void show() override;
};


#endif //CPP_DESIGNPATTERNS_BENTLEYCAR_H
