//
// Created by SvipVM on 2022/2/12.
//

#include "FatPersonBuilder.h"

FatPersonBuilder::FatPersonBuilder(std::string name_) :
    PersonBuilder(name_) {  }

void FatPersonBuilder::borned() {
    std::cout << "fat born: excite." << std::endl;
}

void FatPersonBuilder::growthed() {
    std::cout << "fat growth: bad." << std::endl;
}

void FatPersonBuilder::died() {
    std::cout << "fat died: white." << std::endl;
}
