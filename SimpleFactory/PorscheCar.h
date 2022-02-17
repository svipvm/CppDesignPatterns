//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_PORSCHECAR_H
#define CPP_DESIGNPATTERNS_PORSCHECAR_H

#include "Car.h"

class PorscheCar : public Car {
public:
    explicit PorscheCar(float price_ = 300);
    void show() override;
};


#endif //CPP_DESIGNPATTERNS_PORSCHECAR_H
