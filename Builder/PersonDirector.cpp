//
// Created by SvipVM on 2022/2/12.
//

#include "PersonDirector.h"

void PersonDirector::Construct(std::shared_ptr<PersonBuilder> personBuilder) {
    std::cout << "her name is " << personBuilder->getName() << std::endl;
    personBuilder->borned();
    personBuilder->growthed();
    personBuilder->died();
}
