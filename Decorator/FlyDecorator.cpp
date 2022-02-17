//
// Created by SvipVM on 2022/2/8.
//

#include "FlyDecorator.h"

void FlyDecorator::skill() {
    SkillDecorator::skill();
    std::cout << "it is flying now." << std::endl;
}