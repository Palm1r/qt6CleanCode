qt_add_library(OsInfo STATIC)

set_target_properties(OsInfo PROPERTIES AUTOMOC ON)
target_link_libraries(OsInfo PRIVATE Qt6::Quick)

qt_add_qml_module(OsInfo
    URI "UI.OsInfo"
    VERSION 1.0
    QML_FILES qml/OsInfo.qml
)
