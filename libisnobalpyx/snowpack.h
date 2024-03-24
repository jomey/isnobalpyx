#include "data/snowlayers.h"
#include "data/flux.h"

#ifndef SNOWPACK_H
#define SNOWPACK_H

class Snowpack {
public:
  TopLayer top_layer;
  BottomLayer bottom_layer;
  Energy energy;
  EnergyFlux energy_flux;

  Snowpack(TopLayer& top_layer, BottomLayer& bottom_layer);

  double height() const;
};

#endif // SNOWPACK_H
