//
// Created by SvipVM on 2022/2/17.
//

#ifndef CPP_DESIGNPATTERNS_SUBJECT_H
#define CPP_DESIGNPATTERNS_SUBJECT_H

#include <memory>
#include <list>
#include "Observer.h"

class Subject {
public:
    void attach(const std::shared_ptr<Observer>& observer);
    void detach(const std::shared_ptr<Observer>& observer);
    void notify();

private:
    std::list<std::shared_ptr<Observer>> observers;
};


#endif //CPP_DESIGNPATTERNS_SUBJECT_H
