//
// Created by SvipVM on 2022/2/8.
//

#include "LaserDecorator.h"

void LaserDecorator::skill() {
    SkillDecorator::skill();
    std::cout << "it is a later now." << std::endl;
}
