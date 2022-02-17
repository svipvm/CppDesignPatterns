//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_HERO_H
#define CPP_DESIGNPATTERNS_HERO_H

#include <iostream>
#include <string>

class Hero {
public:
    virtual void skill() = 0;
private:
    std::string name;
};


#endif //CPP_DESIGNPATTERNS_HERO_H
