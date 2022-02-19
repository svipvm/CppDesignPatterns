//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_REDISROOM_H
#define CPP_DESIGNPATTERNS_REDISROOM_H


#include "RoomInterface.h"

class RedisRoom : public RoomInterface {
public:
    Room getRoom(std::string id) override;

    bool setRoom(Room room) override;
};


#endif //CPP_DESIGNPATTERNS_REDISROOM_H
