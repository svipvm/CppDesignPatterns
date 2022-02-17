//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_DOG_H
#define CPP_DESIGNPATTERNS_DOG_H


#include "Animal.h"

class Dog : public Animal {
public:
    Dog(const std::string &name_);
    void show() override;
};


#endif //CPP_DESIGNPATTERNS_DOG_H
