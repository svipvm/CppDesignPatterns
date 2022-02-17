//
// Created by SvipVM on 2022/2/6.
//

#ifndef CPP_DESIGNPATTERNS_CARFACTORY_H
#define CPP_DESIGNPATTERNS_CARFACTORY_H

#include "Car.h"
#include <memory>
#include "BentleyCar.h"
#include "FerrariCar.h"
#include "PorscheCar.h"

const unsigned int BENTLEY = 1;
const unsigned int FERRARI = 2;
const unsigned int PORSCHE = 3;

class CarFactory {
public:
    static std::shared_ptr<Car> createCar(unsigned int type);
};


#endif //CPP_DESIGNPATTERNS_CARFACTORY_H
