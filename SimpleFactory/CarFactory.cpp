//
// Created by SvipVM on 2022/2/6.
//

#include "CarFactory.h"

std::shared_ptr<Car> CarFactory::createCar(unsigned int type) {
    std::shared_ptr<Car> car;
    switch (type) {
        case BENTLEY:
            car = std::make_shared<BentleyCar>();
            break;
        case FERRARI:
            car = std::make_shared<FerrariCar>();
            break;
        case PORSCHE:
            car = std::make_shared<PorscheCar>();
            break;
        default:
            break;
    }
    return car;
}
