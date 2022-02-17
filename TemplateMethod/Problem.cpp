//
// Created by SvipVM on 2022/2/9.
//

#include "Problem.h"

Problem::Problem(const std::string &name_) :
    name(name_) {  }

void Problem::problem1() {
    std::cout << "#1 : what is your sex?" << std::endl
              << "A : man" << std::endl
              << "B : woman" << std::endl
              << "Answer : " << result1() << std::endl;
}

void Problem::problem2() {
    std::cout << "#2 : where are you from?" << std::endl
              << "A : Beijing" << std::endl
              << "B : Shanghai" << std::endl
              << "Answer : " << result2() << std::endl;
}

void Problem::show() {
    std::cout << "name : " << name << ", these problems :" << std::endl;
    problem1();
    problem2();
}
