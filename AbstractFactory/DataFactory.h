//
// Created by SvipVM on 2022/2/19.
//

#ifndef CPP_DESIGNPATTERNS_DATAFACTORY_H
#define CPP_DESIGNPATTERNS_DATAFACTORY_H

#include <memory>
#include "UserInterface.h"
#include "RoomInterface.h"
#include "AccessUser.h"
#include "RedisUser.h"
#include "AccessRoom.h"
#include "RedisRoom.h"

class DataFactory {
public:
    static std::shared_ptr<UserInterface> CreateUser();
    static std::shared_ptr<RoomInterface> CraeteRoom();
private:
    static std::string dbname;
};


#endif //CPP_DESIGNPATTERNS_DATAFACTORY_H
