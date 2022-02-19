//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_ACCESSUSER_H
#define CPP_DESIGNPATTERNS_ACCESSUSER_H


#include "UserInterface.h"

class AccessUser : public UserInterface {
public:
    bool setUser(User user) override;
    User getUser(std::string id) override;
};


#endif //CPP_DESIGNPATTERNS_ACCESSUSER_H
