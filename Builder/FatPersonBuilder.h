//
// Created by SvipVM on 2022/2/12.
//

#ifndef CPP_DESIGNPATTERNS_FATPERSONBUILDER_H
#define CPP_DESIGNPATTERNS_FATPERSONBUILDER_H


#include "PersonBuilder.h"

class FatPersonBuilder : public PersonBuilder {
public:
    FatPersonBuilder(std::string name_);
    void borned() override;
    void growthed() override;
    void died() override;
};


#endif //CPP_DESIGNPATTERNS_FATPERSONBUILDER_H
