//
// Data structure to hold the snowpack state variables.
// This is split into two layers, holding values for each.
// Also contains an 'energy' struct to hold calculated values
// for the current time.
//

#include "snowpack.h"

Snowpack::Snowpack(
    TopLayer& top_layer,
    BottomLayer& bottom_layer
    ):top_layer(top_layer),bottom_layer(bottom_layer) {
  energy = Energy();
}

double Snowpack::height() const {
    return top_layer.height + bottom_layer.height;
}
