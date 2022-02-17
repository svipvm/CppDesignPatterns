//
// Created by SvipVM on 2022/2/12.
//

#include "PersonBuilder.h"

#include <utility>

PersonBuilder::PersonBuilder(std::string name_) :
    name(std::move(name_)) {  }

std::string PersonBuilder::getName() {
    return name;
}
