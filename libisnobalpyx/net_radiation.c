/*
** DESCRIPTION:
**  Calculates net allwave radiation from the net solar radiation,
**	incoming thermal/longwave radiation, and the snow surface
**	temperature.
**
*/

#include "constants.h"
#include <math.h>

double
net_radiation(double net_solar,
              double incoming_longwave,
              double snow_temperature)
{
  return net_solar +
         (SNOW_EMISSIVITY *
           (
            incoming_longwave - STEF_BOLTZMANN * pow(snow_temperature, 4)
           )
         );
}
