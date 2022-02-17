//
// Created by SvipVM on 2022/2/9.
//

#include "Cut.h"

Cut::Cut(const std::string &name_) :
    Animal(name_) {  }

void Cut::show() {
    std::cout << "this is a cut." << std::endl;
}

