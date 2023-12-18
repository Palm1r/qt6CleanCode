project(AppLayer)

set(SOURCE_FILES
     appservice.h
)

add_library(AppLayer STATIC ${SOURCE_FILES})
target_link_libraries(AppLayer Qt6::Core)
target_include_directories(AppLayer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
