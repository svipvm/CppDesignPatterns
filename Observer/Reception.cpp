//
// Created by SvipVM on 2022/2/17.
//

#include "Reception.h"

std::string &Reception::getState() {
    return state;
}

void Reception::setState(const std::string &state_) {
    Reception::state = state_;
}

