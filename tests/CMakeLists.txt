find_package(Catch2 3 REQUIRED)

add_executable(unit_tests
        _main.cpp
        physics/energy_balance/test_net_radiation.cpp
        physics/test_energy_balance.cpp
)
target_link_libraries(
        unit_tests
        PUBLIC libisnobalpyx
        PRIVATE Catch2::Catch2WithMain
)
