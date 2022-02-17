//
// Created by SvipVM on 2022/2/12.
//

#include "ThinPersonBuilder.h"

ThinPersonBuilder::ThinPersonBuilder(std::string name_) :
    PersonBuilder(name_) {  }

void ThinPersonBuilder::borned() {
    std::cout << "thin born: happy." << std::endl;
}

void ThinPersonBuilder::growthed() {
    std::cout << "thin growth: gray." << std::endl;
}

void ThinPersonBuilder::died() {
    std::cout << "thin died: yellow." << std::endl;
}
