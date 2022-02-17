//
// Created by SvipVM on 2022/2/8.
//

#include "DownloadReal.h"

DownloadReal::DownloadReal(const std::string &name_) :
    name(name_) {  }

void DownloadReal::show() {
    std::cout << "file: " << getName()
              << " -> download finish." << std::endl;
}

std::string &DownloadReal::getName() {
    return name;
}
