//
// Created by SvipVM on 2022/2/17.
//

#ifndef CPP_DESIGNPATTERNS_RECEPTION_H
#define CPP_DESIGNPATTERNS_RECEPTION_H

#include "Subject.h"

class Reception : public Subject {
public:
    std::string &getState();
    void setState(const std::string &state);

private:
    std::string state;
};


#endif //CPP_DESIGNPATTERNS_RECEPTION_H
