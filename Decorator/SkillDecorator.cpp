//
// Created by SvipVM on 2022/2/8.
//

#include "SkillDecorator.h"

void SkillDecorator::setSkill(std::shared_ptr<Hero> hero_) {
    hero = std::shared_ptr<Hero>(hero_);
}

void SkillDecorator::skill() {
    if (hero != nullptr) {
        hero->skill();
    }
}
