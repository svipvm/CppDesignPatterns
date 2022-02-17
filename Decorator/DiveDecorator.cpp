//
// Created by SvipVM on 2022/2/8.
//

#include "DiveDecorator.h"

void DiveDecorator::skill() {
    SkillDecorator::skill();
    std::cout << "it is diving now." << std::endl;
}
