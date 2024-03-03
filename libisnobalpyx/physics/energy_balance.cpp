//
// Calculate snowpack energy balance for the current time step.
//

#include "energy_balance.h"

extern "C" {
  #include "energy_balance/net_radiation.h"
}

int energy_balance(
    Snowpack& snowpack,
    InputForcing& input_forcing
) {
  if (snowpack.height() > 0.0) {
    snowpack.energy.net_radiation = net_radiation(
        input_forcing.net_solar,
        input_forcing.longwave,
        snowpack.top_layer.temperature
    );
  }
  else {
    snowpack.energy.net_radiation = 0.0;
  }

  return true;
}
