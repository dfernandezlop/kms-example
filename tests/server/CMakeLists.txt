add_test_program (test_open_cv openCVTest.cpp)

add_dependencies(test_open_cv ${LIBRARY_NAME}impl)

set_property (TARGET test_open_cv
  PROPERTY INCLUDE_DIRECTORIES
    ${OPENCV_INCLUDE_DIRS}
    ${KMSCORE_INCLUDE_DIRS}
    ${KMSFILTERS_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/server/implementation/objects
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/server/implementation
    ${CMAKE_CURRENT_SOURCE_DIR}/../../src/server/interface
    ${CMAKE_CURRENT_BINARY_DIR}/../../src/server/interface/generated-cpp
    ${CMAKE_CURRENT_BINARY_DIR}/../../src/server/implementation/generated-cpp
)
target_link_libraries(test_open_cv
  ${OPENCV_LIBRARIES}
  ${KMSCORE_LIBRARIES}
  ${KMSFILTERS_LIBRARIES}
  ${LIBRARY_NAME}impl
)