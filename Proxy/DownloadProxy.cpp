//
// Created by SvipVM on 2022/2/8.
//

#include "DownloadProxy.h"

DownloadProxy::DownloadProxy(const std::string &name_) {
    download = std::make_shared<DownloadReal>(name_);
}

void DownloadProxy::show() {
    if (download == nullptr) return;

    std::cout << "file: " << download->getName()
              << " -> downloading ..." << std::endl;
    download->show();
}


