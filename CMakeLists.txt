cmake_minimum_required(VERSION 3.2)

project(veditor VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

#find_package(Boost COMPONENTS unit_test_framework REQUIRED)

configure_file(version.h.in version.h)

add_executable(veditor main.cpp
    Include/veditor.h
    Include/document.h
    Include/primitive.h)

#add_library(ip_filter_lib ip_filter.h ip_filter.cpp)

#add_executable(ip_filter_tests ip_filter_tests.cpp)

set_target_properties(veditor
        PROPERTIES
                CXX_STANDARD 14
                CXX_STANDARD_REQUIRED ON
                CMAKE_CXX_EXTENSIONS OFF
                COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

#set_target_properties(ip_filter_tests
#        PROPERTIES
#                COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
#                INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
#)

#target_link_libraries(veditor
#        ip_filter_lib
#)

#target_link_libraries(ip_filter_tests
#        ${Boost_LIBRARIES}
#        ip_filter_lib
#)

install(TARGETS veditor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT edkolotilov@gmail.com)

include (CPack)
