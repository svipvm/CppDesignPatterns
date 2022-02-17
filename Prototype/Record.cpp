//
// Created by SvipVM on 2022/2/9.
//

#include "Record.h"
#include <utility>

Record::Record(const Record &record) {
    this->school = record.school;
    this->times = record.times;
}

void Record::setRecord(const std::string &school_, int times_) {
    this->school = school_;
    this->times = times_;
}

std::string &Record::getSchool() {
    return this->school;
}

int &Record::getTimes() {
    return this->times;
}
