#ifndef OSINFOINTERFACE_H
#define OSINFOINTERFACE_H

#include <QString>

class OSInfoInterface {
public:
    virtual ~OSInfoInterface() = default;
    virtual QString getOSName() const = 0;
};

#endif // OSINFOINTERFACE_H
