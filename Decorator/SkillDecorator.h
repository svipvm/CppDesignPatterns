//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_SKILLDECORATOR_H
#define CPP_DESIGNPATTERNS_SKILLDECORATOR_H

#include <memory>
#include "Hero.h"

class SkillDecorator : public Hero {
public:
    void setSkill(std::shared_ptr<Hero> hero_);
    void skill() override;

protected:
    std::shared_ptr<Hero> hero;
};


#endif //CPP_DESIGNPATTERNS_SKILLDECORATOR_H
