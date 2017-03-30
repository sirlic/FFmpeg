# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )
find_library(
            android_lib
            android)

#set(distribution_DIR ${CMAKE_SOURCE_DIR}/main/libs)
#set(PROJECT_BINARY_DIR ${CMAKE_SOURCE_DIR}/main/libs)


add_library( ffmpeg
             SHARED
             IMPORTED)
set_target_properties( ffmpeg
                       PROPERTIES IMPORTED_LOCATION
                       ${CMAKE_CURRENT_SOURCE_DIR}/main/libs/armeabi-v7a/libijkffmpeg.so)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_library( helloworld
             SHARED
             main/jni/simplest_ffmpeg_helloworld.c /
             main/jni/log/log.c)

include_directories(main/jni/include)
include_directories(main/jni/log/include)
set(LIBRARY_DEPS GLESv2 android log EGL)
#target_include_directories(native-lib PRIVATE libs/include)
target_link_libraries(helloworld ffmpeg
                       ${log-lib} android)