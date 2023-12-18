#ifndef OSINFOADAPTER_H
#define OSINFOADAPTER_H

#include "osinfointerface.h"

class OSInfoAdapter : public OSInfoInterface {
public:
    QString getOSName() const override {
        return QSysInfo::prettyProductName();
    }
};


#endif // OSINFOADAPTER_H
