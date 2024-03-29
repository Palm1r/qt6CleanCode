cmake_minimum_required(VERSION 3.16)

project(qt6CleanCode VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appqt6CleanCode
    main.cpp
)

qt_add_qml_module(appqt6CleanCode
    URI qt6CleanCode
    VERSION 1.0
    QML_FILES Main.qml
)

add_subdirectory(UI)
add_subdirectory(AppLayer)
add_subdirectory(Adapters)
add_subdirectory(Domain)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appqt6CleanCode PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appqt6CleanCode
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appqt6CleanCode
    PRIVATE Qt6::Quick OsInfoplugin Domain Adapters AppLayer
)

include(GNUInstallDirs)
install(TARGETS appqt6CleanCode
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
