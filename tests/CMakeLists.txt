find_package(Catch2 3 REQUIRED)

add_executable(unit_tests
        _main.cpp
        test_net_radiation.cpp
)
target_link_libraries(
        unit_tests
        PUBLIC libisnobalpyx
        PRIVATE Catch2::Catch2WithMain
)
