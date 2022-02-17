//
// Created by SvipVM on 2022/2/6.
//

#include "Car.h"

void Car::show() {
    std::cout << "This's a simple car, and its price is : "
              << price << std::endl;
}

Car::Car(float price_) :
    price(price_) {   }


