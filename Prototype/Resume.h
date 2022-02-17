//
// Created by SvipVM on 2022/2/9.
//

#ifndef CPP_DESIGNPATTERNS_RESUME_H
#define CPP_DESIGNPATTERNS_RESUME_H

#include <memory>
#include "Record.h"

class Resume {
public:
    Resume() = default;
    Resume(const Resume &resume);
    std::shared_ptr<Resume> clone();
    void setRecord(const std::string &school_, int times_);
    void setInfo(const std::string &name_, int age_);
    void show();
private:
    std::string name;
    int age{};
    std::shared_ptr<Record> record;
};


#endif //CPP_DESIGNPATTERNS_RESUME_H
