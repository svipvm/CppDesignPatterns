//
// Created by SvipVM on 2022/2/12.
//

#ifndef CPP_DESIGNPATTERNS_PERSONDIRECTOR_H
#define CPP_DESIGNPATTERNS_PERSONDIRECTOR_H

#include <memory>
#include "PersonBuilder.h"

class PersonDirector {
public:
    void Construct(std::shared_ptr<PersonBuilder> personBuilder);
};


#endif //CPP_DESIGNPATTERNS_PERSONDIRECTOR_H
