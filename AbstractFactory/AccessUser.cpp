//
// Created by SvipVM on 2022/2/19.
//

#include "AccessUser.h"

UserInterface::User AccessUser::getUser(std::string id) {
    std::cout << "this is a Accessdb, and it's getting a user." << std::endl;
    return id + " - User";
}

bool AccessUser::setUser(UserInterface::User user) {
    std::cout << "this is a Accessdb, and it's setting a user." << std::endl;
    return false;
}
