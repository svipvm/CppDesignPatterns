//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_POORPERSON_H
#define CPP_DESIGNPATTERNS_POORPERSON_H


#include "Problem.h"

class PoorPerson : public Problem {
public:
    PoorPerson(const std::string &name_);
    std::string result2() override;
    std::string result1() override;
};


#endif //CPP_DESIGNPATTERNS_POORPERSON_H
