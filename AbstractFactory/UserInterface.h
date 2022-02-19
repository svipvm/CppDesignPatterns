//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_USERINTERFACE_H
#define CPP_DESIGNPATTERNS_USERINTERFACE_H

#include <string>
#include <iostream>

class UserInterface {
public:
    using User = std::string;
    virtual User getUser(std::string id) = 0;
    virtual bool setUser(User user) = 0;
};


#endif //CPP_DESIGNPATTERNS_USERINTERFACE_H
