//
// Data structure holding input forcing values for the
// current time step. Terms defined as 'const' are provided as forcing inputs
// to the model. Other terms are calculated at the beginning of the time step.
//

#ifndef DATA_INPUT_FORCING_H
#define DATA_INPUT_FORCING_H

struct InputForcing {
  const double net_solar;
  const double longwave;

  const double air_temperature;
  double air_pressure;
  // TODO - Remove logic that changes this value in turbulent_energy.c
  double vapor_pressure;

  const double wind_speed;
};

#endif // DATA_INPUT_FORCING_H
