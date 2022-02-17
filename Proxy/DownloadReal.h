//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_DOWNLOADREAL_H
#define CPP_DESIGNPATTERNS_DOWNLOADREAL_H

#include "DownloadInterface.h"

class DownloadReal : public DownloadInterface {
public:
    DownloadReal(const std::string &name_);
    void show() override;
    std::string &getName();

private:
    std::string name;
};


#endif //CPP_DESIGNPATTERNS_DOWNLOADREAL_H
