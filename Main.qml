import QtQuick

import UI.OsInfo

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    OsInfo {
        anchors.centerIn: parent
    }
}
