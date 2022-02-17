//
// Created by SvipVM on 2022/2/8.
//

#ifndef CPP_DESIGNPATTERNS_DOWNLOADPROXY_H
#define CPP_DESIGNPATTERNS_DOWNLOADPROXY_H

#include "DownloadInterface.h"
#include "DownloadReal.h"
#include <memory>

class DownloadProxy : public DownloadInterface {
public:
    DownloadProxy(const std::string &name_);
    void show() override;

private:
    std::shared_ptr<DownloadReal> download;
};


#endif //CPP_DESIGNPATTERNS_DOWNLOADPROXY_H
