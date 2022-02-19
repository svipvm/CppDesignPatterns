//
// Created by SvipVM on 2022/2/19.
//

#include "RedisUser.h"

UserInterface::User RedisUser::getUser(std::string id) {
    std::cout << "this is a Redisdb, and it's getting a user." << std::endl;
    return id + " - User";
}

bool RedisUser::setUser(UserInterface::User user) {
    std::cout << "this is a Redisdb, and it's setting a user." << std::endl;
    return false;
}
