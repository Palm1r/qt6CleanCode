#ifndef APPSERVICE_H
#define APPSERVICE_H

#include <QScopedPointer>

#include "osinfointerface.h"

class AppService {
    OSInfoInterface* osInfo;

public:
    AppService(OSInfoInterface* osInfo) : osInfo(osInfo) {}

    QString getOSInfo() {
        return osInfo->getOSName();
    }
};


#endif // APPSERVICE_H
