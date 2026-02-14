add_library(mylib SHARED
    src/mylib.cpp
)

target_include_directories(mylib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes
)

target_compile_definitions(mylib PRIVATE MYLIB_EXPORTS)

set_target_properties(mylib PROPERTIES
    VERSION 1.0
    SOVERSION 1
)