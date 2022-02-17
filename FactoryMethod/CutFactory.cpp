//
// Created by SvipVM on 2022/2/9.
//

#include "CutFactory.h"
#include "Cut.h"

std::shared_ptr<Animal> CutFactory::createAnimal(const std::string &name) {
    return std::make_shared<Cut>(name);
}
