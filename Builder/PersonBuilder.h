//
// Created by SvipVM on 2022/2/12.
//

#ifndef CPP_DESIGNPATTERNS_PERSONBUILDER_H
#define CPP_DESIGNPATTERNS_PERSONBUILDER_H

#include <iostream>
#include <string>

class PersonBuilder {
public:
    PersonBuilder(std::string name_);
    std::string getName();
    virtual void borned() = 0;
    virtual void growthed() = 0;
    virtual void died() = 0;
private:
    std::string name;
};


#endif //CPP_DESIGNPATTERNS_PERSONBUILDER_H
