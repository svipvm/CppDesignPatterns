//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_CAPTAIN_H
#define CPP_DESIGNPATTERNS_CAPTAIN_H

#include "Hero.h"

class Captain : public Hero {
public:
    void skill() override;
};


#endif //CPP_DESIGNPATTERNS_CAPTAIN_H
