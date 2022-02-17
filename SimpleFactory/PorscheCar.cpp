//
// Created by SvipVM on 2022/2/6.
//

#include "PorscheCar.h"

PorscheCar::PorscheCar(float price_) :
    Car(price_) {  }

void PorscheCar::show() {
    std::cout << "This's a Porsche car, and its price is : "
              << price << std::endl;
}

