cmake_minimum_required( VERSION 3.0 )
project( chifoumi )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )  # dans la vraie vie, ne pas mettre cette ligne

# tests unitaires
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED libglog cpputest)
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_test.out src/main_test.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )


add_executable( main.out src/main.cpp )
target_link_libraries( main.out ${PKG_LIBRARIES} )

#build doxygen documentation
find_package(Doxygen)
if(DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${CMAKE_BINARY_DIR} ../doc_dev/Doxyfile)
    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR} ../doc_dev/Doxyfile
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
      install(DIRECTORY ${CMAKE_BINARY_DIR}/doc/html
        DESTINATION share/doc/${CMAKE_PROJECT_NAME})
endif()