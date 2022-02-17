//
// Created by SvipVM on 2022/2/9.
//

#include "Resume.h"

Resume::Resume(const Resume &resume) {
    this->name = resume.name;
    this->age = resume.age;
    this->record = std::make_shared<Record>(*resume.record);
}

std::shared_ptr<Resume> Resume::clone() {
    return std::make_shared<Resume>(*this);
}

void Resume::setRecord(const std::string &school_, int times_) {
    if (record == nullptr) record = std::make_shared<Record>();
    record->setRecord(school_, times_);
}

void Resume::setInfo(const std::string &name_, int age_) {
    this->name = name_;
    this->age = age_;
}

void Resume::show() {
    std::cout << " name : " << name << " |"
              << "  age : " << age << " |"
              << "school: " << record->getSchool() << " |"
              << " times: " << record->getTimes() << " |"
              << std::endl;
}

