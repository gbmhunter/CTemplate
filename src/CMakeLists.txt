#
# \file                 CMakeLists.txt
# \author               Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
# \edited               n/a
# \created              2017-11-24
# \last-modified        2018-04-08
# \brief                Contains instructions for building the source code into a static library.
# \details
#               See README.md in root dir for more info.

file(GLOB_RECURSE CTemplate_SRC "*.c")

file(GLOB_RECURSE CTemplate_HEADERS
        "${CMAKE_SOURCE_DIR}/include/*.h")

message("CTemplate_SRC = ${CTemplate_SRC}")
add_library(CTemplate STATIC ${CTemplate_SRC} ${CTemplate_HEADERS})

# Compile as C code
set_property(TARGET CTemplate PROPERTY C_STANDARD 99)

if(COVERAGE)
    set_target_properties(CTemplate PROPERTIES COMPILE_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    set_target_properties(CTemplate PROPERTIES LINK_FLAGS "-coverage -lgcov")
endif ()

target_include_directories(CTemplate PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# On Linux, "sudo make install" will typically copy the library
# into the folder /usr/local/bin
install(TARGETS CTemplate DESTINATION lib)

# On Linux, "sudo make install" will typically copy the
# folder into /usr/local/include
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/CTemplate DESTINATION include)