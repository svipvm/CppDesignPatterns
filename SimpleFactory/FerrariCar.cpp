//
// Created by SvipVM on 2022/2/6.
//

#include "FerrariCar.h"

FerrariCar::FerrariCar(float price_) :
    Car(price_) {  }

void FerrariCar::show() {
    std::cout << "This's a Ferrari car, and its price is : "
              << price << std::endl;
}
