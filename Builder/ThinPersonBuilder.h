//
// Created by SvipVM on 2022/2/12.
//

#ifndef CPP_DESIGNPATTERNS_THINPERSONBUILDER_H
#define CPP_DESIGNPATTERNS_THINPERSONBUILDER_H


#include "PersonBuilder.h"

class ThinPersonBuilder : public PersonBuilder {
public:
    ThinPersonBuilder(std::string name_);
    void borned() override;
    void growthed() override;
    void died() override;
};


#endif //CPP_DESIGNPATTERNS_THINPERSONBUILDER_H
