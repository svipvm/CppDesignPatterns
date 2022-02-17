//
// Created by SvipVM on 2022/2/17.
//

#ifndef CPP_DESIGNPATTERNS_EMPLOYEE_H
#define CPP_DESIGNPATTERNS_EMPLOYEE_H

#include <iostream>
#include <memory>
#include <string>
#include "Observer.h"
#include "Subject.h"
#include "Reception.h"

class Employee : public Observer {
public:
    Employee(std::string name_, std::shared_ptr<Reception> reception_);
    void update() override;

private:
    std::string name;
    std::string info;
    std::shared_ptr<Reception> reception;

};


#endif //CPP_DESIGNPATTERNS_EMPLOYEE_H
