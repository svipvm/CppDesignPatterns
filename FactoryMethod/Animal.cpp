//
// Created by SvipVM on 2022/2/9.
//

#include "Animal.h"

Animal::Animal(const std::string &name_) :
    name(name_) {  }

void Animal::show() {
    std::cout << "this is a animal." << std::endl;
}