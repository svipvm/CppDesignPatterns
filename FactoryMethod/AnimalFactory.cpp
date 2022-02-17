//
// Created by SvipVM on 2022/2/9.
//

#include "AnimalFactory.h"

std::shared_ptr<Animal> AnimalFactory::createAnimal(const std::string &name) {
    std::cout << "this is a default factory." << std::endl;
}