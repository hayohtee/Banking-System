
add_executable(${PROJECT_NAME} main.cpp account.cpp utility.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)