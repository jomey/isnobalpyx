//
// Created by student on 3/12/24.
//

#include <stdbool.h>

#ifndef RUN_CONFIGURATION_H
#define RUN_CONFIGURATION_H

struct RunConfiguration {
  const double roughness_length;
  const bool relative_measurement_heights;
  const double air_temperature_height;
  const double wind_speed_height;
};

#endif // RUN_CONFIGURATION_H
