set(CMAKE_CXX_FLAGS "-std=c++14 -pthread -O3 -g -DNDEBUG -Wall -Wextra -fPIC -march=native ${CXX_EXTRA_FLAGS}")

file(GLOB lhc_src
    "*.cpp"
)

add_executable(lhc ${lhc_src})
set_target_properties( lhc
    PROPERTIES
    # ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    # LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
