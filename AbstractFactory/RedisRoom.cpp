//
// Created by SvipVM on 2022/2/19.
//

#include "RedisRoom.h"

RoomInterface::Room RedisRoom::getRoom(std::string id) {
    std::cout << "this is a Redisdb, and it's getting a room." << std::endl;
    return std::atoi(id.c_str());
}

bool RedisRoom::setRoom(RoomInterface::Room room) {
    std::cout << "this is a Redisdb, and it's setting a room." << std::endl;
    return false;
}
