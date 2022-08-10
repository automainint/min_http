cmake_minimum_required(VERSION 3.16)

set(MIN_HTTP_PROJECT min_http)
set(MIN_HTTP_LIBRARY min_http)

if(NOT DEFINED CMAKE_BUILD_PARALLEL_LEVEL)
  set(CMAKE_BUILD_PARALLEL_LEVEL 4)
endif()

project(
  ${MIN_HTTP_PROJECT}
  VERSION 0.1.1
  DESCRIPTION "Minimalistic HTTP/2 C library."
  LANGUAGES C)

add_library(${MIN_HTTP_LIBRARY} STATIC)
add_library(${MIN_HTTP_LIBRARY}::${MIN_HTTP_LIBRARY} ALIAS ${MIN_HTTP_LIBRARY})
target_compile_features(${MIN_HTTP_LIBRARY} PUBLIC c_std_11)

enable_testing()

add_subdirectory(source)
