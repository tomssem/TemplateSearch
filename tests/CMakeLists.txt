Include(FetchContent)

add_executable(tests main.cpp)
Include(FetchContent)

FetchContent_Declare(
      Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
          GIT_TAG        v2.13.1
    )

FetchContent_Declare(
      Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
          GIT_TAG        v2.13.1
    )

FetchContent_MakeAvailable(Catch2)

target_link_libraries(tests Catch2::Catch2)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)
include(CTest)
include(Catch)
catch_discover_tests(tests)
