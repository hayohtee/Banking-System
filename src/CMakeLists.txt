file (COPY ${PROJECT_SOURCE_DIR}/res/accounts.dat DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(${PROJECT_NAME} main.cpp 
        account.cpp utility.cpp account_repository.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)