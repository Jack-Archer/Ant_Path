cmake_minimum_required(VERSION 3.10)

project(AntPath)

if (NOT (DEFINED EXECUTABLE_OUTPUT_PATH) OR (EXECUTABLE_OUTPUT_PATH STREQUAL ""))
  SET (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
endif ()


add_definitions("-Wall -Wsign-conversion -Wextra -Weffc++")

SET( impl
    main.cpp
    ant_path.cpp
    check_move.cpp
    )

INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  )


# add the executable
add_executable(AntPath ${impl})
