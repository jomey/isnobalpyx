#include <catch2/catch_test_macros.hpp>

#include "../../libisnobalpyx/snowpack.h"
#include "../../libisnobalpyx/data/input_forcing.h"
#include "../../libisnobalpyx/physics/energy_balance.h"

TEST_CASE("Calculating snowpack energy balance"){
  TopLayer top_layer;
  top_layer.height = 0.0;
  BottomLayer bottom_layer;

  Snowpack test_snowpack(top_layer, bottom_layer);
  InputForcing test_input_forcing = {
      100, // net_solar
      100, // longwave
  };

  SECTION("with snow cover present") {
    test_snowpack.top_layer.height = 10.0;
    bool return_code = energy_balance(
        test_snowpack, test_input_forcing
    );

    REQUIRE(return_code == true);
    REQUIRE(test_snowpack.energy.net_radiation == 198.0);
  }

  SECTION("with no snow cover present") {
    bool return_code = energy_balance(
        test_snowpack, test_input_forcing
    );

    REQUIRE(return_code == true);
    REQUIRE(test_snowpack.energy.net_radiation == 0.0);

  }
}