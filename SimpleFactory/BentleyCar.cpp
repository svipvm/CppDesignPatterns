//
// Created by SvipVM on 2022/2/6.
//

#include "BentleyCar.h"

BentleyCar::BentleyCar(float price_) :
    Car(price_) {  }

void BentleyCar::show() {
    std::cout << "This's a Bentley car, and its price is : "
              << price << std::endl;
}


