//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_REDISUSER_H
#define CPP_DESIGNPATTERNS_REDISUSER_H


#include "UserInterface.h"

class RedisUser : public UserInterface {
public:
    User getUser(std::string id) override;

    bool setUser(User user) override;
};


#endif //CPP_DESIGNPATTERNS_REDISUSER_H
