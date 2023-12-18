project(Adapters)

set(SOURCE_FILES
    osinfoadapter.h
)

add_library(Adapters STATIC ${SOURCE_FILES})
target_link_libraries(Adapters Qt6::Core)
target_include_directories(Adapters PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
