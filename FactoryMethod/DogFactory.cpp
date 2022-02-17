//
// Created by SvipVM on 2022/2/9.
//

#include "DogFactory.h"
#include "Dog.h"

std::shared_ptr<Animal> DogFactory::createAnimal(const std::string &name) {
    return std::make_shared<Dog>(name);
}
