project(HEY)
enable_language(CXX)
set(CMAKE_CXX_STANDARD 20)


if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Wno-missing-braces)
endif ()


# OR ("${CMAKE_BUILD_TYPE_INIT}" STREQUAL "Debug")
if (("${CMAKE_CONFIGURATION_TYPES}" STREQUAL "Debug") OR ("${CMAKE_BUILD_TYPE}" STREQUAL "Debug"))
    set(IS_DEBUG true)
else()
    set(IS_DEBUG false)
endif ()

if (IS_DEBUG)
    add_compile_definitions(__DEBUG=1)
    add_compile_definitions(__RELEASE=0)
else ()
    add_compile_definitions(__DEBUG=0)
    add_compile_definitions(__RELEASE=1)
endif ()


add_executable(CPPTD ./main.cpp)
