cmake_minimum_required(VERSION 3.7)

project(homework)

INCLUDE_DIRECTORIES(

)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES


      scope_guard/ScopeGuard.cpp scope_guard/ScopeGuard.h
        init_const_new/Foo.h





        main.cpp
        )

add_executable(homework ${SOURCE_FILES})
