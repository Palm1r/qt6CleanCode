qt_add_library(CpuArchitecture STATIC)

set_target_properties(CpuArchitecture PROPERTIES AUTOMOC ON)
target_link_libraries(CpuArchitecture PRIVATE Qt6::Quick)

qt_add_qml_module(CpuArchitecture
    URI "UI.CpuArchitecture"
    VERSION 1.0
    QML_FILES CpuType.qml
)
