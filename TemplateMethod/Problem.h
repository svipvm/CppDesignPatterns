//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_PROBLEM_H
#define CPP_DESIGNPATTERNS_PROBLEM_H

#include <iostream>
#include <string>

class Problem {
public:
    Problem(const std::string &name_);
    virtual std::string result1() = 0;
    virtual std::string result2() = 0;
    void show();

protected:
    void problem1();
    void problem2();

private:
    std::string name;
};


#endif //CPP_DESIGNPATTERNS_PROBLEM_H
