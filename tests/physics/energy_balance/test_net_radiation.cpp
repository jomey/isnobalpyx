//
//
//
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

extern "C" {
  #include "../../../libisnobalpyx/physics/energy_balance/net_radiation.h"
}

TEST_CASE( "Calculating net radiation" ) {
  SECTION("No incoming energy") {
    REQUIRE( net_radiation(0, 0, 0) == 0.0 );
  }
  SECTION("Incoming shortwave") {
    REQUIRE( net_radiation(100.0, 0, 0) == 100.0 );
  }
  SECTION("Incoming longwave") {
    REQUIRE( net_radiation(0, 200.0, 0) == 196.0 );
  }
  SECTION("Snow Temperature") {
    REQUIRE_THAT(
        net_radiation(0, 0, 263.15),
        Catch::Matchers::WithinRel(-266.469, 0.001)
    );
  }
}
