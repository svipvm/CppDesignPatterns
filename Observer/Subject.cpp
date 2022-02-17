//
// Created by SvipVM on 2022/2/17.
//

#include "Subject.h"

void Subject::attach(const std::shared_ptr<Observer>& observer) {
    this->observers.push_back(observer);
}

void Subject::detach(const std::shared_ptr<Observer>& observer) {
    this->observers.remove(observer);
}

void Subject::notify() {
    for (const auto &observer : observers) {
        observer->update();
    }
}


