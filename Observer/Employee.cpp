//
// Created by SvipVM on 2022/2/17.
//

#include "Employee.h"

#include <utility>

Employee::Employee(std::string name_, std::shared_ptr<Reception> reception_) :
    name(std::move(name_)), reception(std::move(reception_)) {  }

void Employee::update() {
    info = reception->getState();
    std::cout << "the reception' person tell: "
              << name << ", it's about " << info
              << std::endl;
}


