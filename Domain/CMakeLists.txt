project(Domain)

set(SOURCE_FILES
    osinfointerface.h
)

add_library(Domain INTERFACE ${SOURCE_FILES})
target_include_directories(Domain INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
