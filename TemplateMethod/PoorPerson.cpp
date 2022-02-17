//
// Created by SvipVM on 2022/2/9.
//

#include "PoorPerson.h"

PoorPerson::PoorPerson(const std::string &name_) :
    Problem(name_) {  }

std::string PoorPerson::result1() {
    return "B";
}

std::string PoorPerson::result2() {
    return "A";
}
