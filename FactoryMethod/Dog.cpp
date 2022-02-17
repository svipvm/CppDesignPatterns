//
// Created by SvipVM on 2022/2/9.
//

#include "Dog.h"

Dog::Dog(const std::string &name_) :
    Animal(name_) {  }

void Dog::show() {
    std::cout << "this is a dog." << std::endl;
}
