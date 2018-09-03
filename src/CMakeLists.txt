include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(lhc_gl SHARED "graphics.cpp" "glad.c")
target_include_directories(lhc_gl PRIVATE ${GLFW_INCLUDEDIR}) # NOTE ${GLFW_INCLUDE_DIRS} is empty somehow
target_link_libraries(lhc_gl ${GLFW_LIBRARIES})
set_target_properties( lhc_gl
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
)

add_executable(lhc "main.cpp")
target_link_libraries(lhc lhc_gl)
set_target_properties( lhc
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
