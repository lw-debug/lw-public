cmake_minimum_required(VERSION 2.8)
project(boost)

FIND_PACKAGE(Boost COMPONENTS python)
# FIND_PACKAGE(PythonInterp)
FIND_PACKAGE(PythonLibs)
include_directories(SYSTEM ${Boost_INCLUDE_DIR} ${Python_INCLUDE_DIR})
include_directories(/usr/bin/python3.5m)

link_libraries(${BOOST_LIBRARIES} ${PYTHON_LIBRARIES})

add_library(helloworld SHARED helloworld.cpp)

set_target_properties(helloworld PROPERTIES PREFIX "")

target_link_libraries(helloworld ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
