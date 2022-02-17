//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_FLYDECORATOR_H
#define CPP_DESIGNPATTERNS_FLYDECORATOR_H

#include "SkillDecorator.h"

class FlyDecorator : public SkillDecorator {
public:
    void skill() override;
};


#endif //CPP_DESIGNPATTERNS_FLYDECORATOR_H
