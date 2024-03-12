add_library(${PROJECT_NAME} SHARED Integer.cpp )

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

message("header files at: " ${CMAKE_SOURCE_DIR}/include)

include_directories(${CMAKE_SOURCE_DIR}/include)