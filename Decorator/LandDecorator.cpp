//
// Created by SvipVM on 2022/2/8.
//

#include "LandDecorator.h"

void LandDecorator::skill() {
    SkillDecorator::skill();
    std::cout << "it is landing now." << std::endl;
}
