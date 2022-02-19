//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_ROOMINTERFACE_H
#define CPP_DESIGNPATTERNS_ROOMINTERFACE_H

#include <string>
#include <iostream>

class RoomInterface {
public:
    using Room = int;
    virtual Room getRoom(std::string id) = 0;
    virtual bool setRoom(Room room) = 0;
};


#endif //CPP_DESIGNPATTERNS_ROOMINTERFACE_H
