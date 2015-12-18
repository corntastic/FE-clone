cmake_minimum_required(VERSION 3.0)
project (FE)

enable_testing()

include_directories(include)

###          ###
# Dependencies #
###          ###

add_subdirectory( vendor/googletest )
include_directories(vendor/googletest/include)

###    ###
# Macros #
###    ###

# Google tests
macro(add_gtest target sourcefile)
  add_executable(${target} ${sourcefile} )
  target_link_libraries(${target} gtest gtest_main)
  add_test(${target} ${target})
endmacro(add_gtest)

###                   ###
# FE Binary / Libraries #
###                   ###

# Example library, delete later.
add_library(example_library
            include/fe/example_library.h
            src/fe/example_library.cc)

# Example test, delete later.
add_gtest(example_test test/fe/example_test.cc)
target_link_libraries(example_test example_library)


# FE binary (keep at the bottom)
add_executable(fe src/fe/fe.cc)
target_link_libraries(fe example_library)
