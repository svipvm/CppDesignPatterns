//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_RECORD_H
#define CPP_DESIGNPATTERNS_RECORD_H

#include <iostream>
#include <string>

class Record {
public:
    Record() = default;
    Record(const Record &record);
    void setRecord(const std::string &school_, int times_);
    std::string &getSchool();
    int &getTimes();
private:
    std::string school;
    int times{};
};


#endif //CPP_DESIGNPATTERNS_RECORD_H
