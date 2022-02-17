//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_ANIMALFACTORY_H
#define CPP_DESIGNPATTERNS_ANIMALFACTORY_H


#include "Animal.h"
#include <memory>

class AnimalFactory {
public:
    virtual std::shared_ptr<Animal> createAnimal(const std::string &name) = 0;
};


#endif //CPP_DESIGNPATTERNS_ANIMALFACTORY_H
