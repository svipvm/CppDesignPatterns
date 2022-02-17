//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_DOGFACTORY_H
#define CPP_DESIGNPATTERNS_DOGFACTORY_H


#include "AnimalFactory.h"

class DogFactory : public AnimalFactory {
public:
    std::shared_ptr<Animal> createAnimal(const std::string &name) override;
};


#endif //CPP_DESIGNPATTERNS_DOGFACTORY_H
