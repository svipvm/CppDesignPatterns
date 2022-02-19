//
// Created by SvipVM on 2022/2/19.
//

#include "DataFactory.h"

std::string DataFactory::dbname = "Redis"; /* NOLINT */

std::shared_ptr<UserInterface> DataFactory::CreateUser() {
    std::shared_ptr<UserInterface> user;
    if (dbname == "Redis") {
        user = std::make_shared<RedisUser>();
    } else if (dbname == "Access") {
        user = std::make_shared<AccessUser>();
    }
    return user;
}

std::shared_ptr<RoomInterface> DataFactory::CraeteRoom() {
    std::shared_ptr<RoomInterface> room;
    if (dbname == "Redis") {
        room = std::make_shared<RedisRoom>();
    } else if (dbname == "Access") {
        room = std::make_shared<AccessRoom>();
    }
    return room;
}

