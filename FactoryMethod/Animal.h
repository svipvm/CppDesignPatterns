//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_ANIMAL_H
#define CPP_DESIGNPATTERNS_ANIMAL_H

#include <string>
#include <iostream>

class Animal {
public:
    Animal(const std::string &name_);
    virtual void show() = 0;
private:
    std::string name;
};


#endif //CPP_DESIGNPATTERNS_ANIMAL_H
