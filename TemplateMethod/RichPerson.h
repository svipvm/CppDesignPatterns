//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_RICHPERSON_H
#define CPP_DESIGNPATTERNS_RICHPERSON_H


#include "Problem.h"

class RichPerson : public Problem {
public:
    RichPerson(const std::string &name_);
    std::string result1() override;
    std::string result2() override;
};


#endif //CPP_DESIGNPATTERNS_RICHPERSON_H
