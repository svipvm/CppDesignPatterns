//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_CUT_H
#define CPP_DESIGNPATTERNS_CUT_H


#include "Animal.h"

class Cut : public Animal {
public:
    Cut(const std::string &name_);
    void show() override;
};


#endif //CPP_DESIGNPATTERNS_CUT_H
