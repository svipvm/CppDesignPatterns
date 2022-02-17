//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_DIVEDECORATOR_H
#define CPP_DESIGNPATTERNS_DIVEDECORATOR_H

#include "SkillDecorator.h"

class DiveDecorator : public SkillDecorator {
public:
    void skill() override;
};


#endif //CPP_DESIGNPATTERNS_DIVEDECORATOR_H
