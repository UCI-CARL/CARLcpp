cmake_minimum_required(VERSION 3.20)

project(
  CARLcpp
  VERSION 3.0
  LANGUAGES CXX)
   
set(interface_HDRS include/carl/ace_ext.hpp
                   include/carl/boost_ext.hpp
                   include/carl/stl_ext.hpp
                   include/carl/yarp_ext.hpp)  

add_library(CARLcpp INTERFACE ${interface_HDRS} include/carl/carlcpp.in.hpp) 


configure_file(include/carl/carlcpp.in.hpp include/carl/carlcpp.hpp @ONLY)    

set_property(TARGET CARLcpp PROPERTY PUBLIC_HEADER ${interface_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/include/carl/carlcpp.hpp )
 
configure_file(cmake/carlcpp-config.cmake.in cmake/carlcpp-config.cmake @ONLY)    
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/cmake/carlcpp-config.cmake DESTINATION lib/cmake/carlcpp)

install(TARGETS CARLcpp
        EXPORT CARLcpp
        PUBLIC_HEADER
            DESTINATION include/carl
            COMPONENT CARLcpp)    
        
