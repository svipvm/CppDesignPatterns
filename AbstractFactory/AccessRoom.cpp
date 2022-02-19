//
// Created by SvipVM on 2022/2/19.
//

#include "AccessRoom.h"

RoomInterface::Room AccessRoom::getRoom(std::string id) {
    std::cout << "this is a Accessdb, and it's getting a room." << std::endl;
    return std::atoi(id.c_str());
}

bool AccessRoom::setRoom(RoomInterface::Room room) {
    std::cout << "this is a Accessdb, and it's setting a room." << std::endl;
    return false;
}
