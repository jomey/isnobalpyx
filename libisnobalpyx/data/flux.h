#ifndef MASS_ENERGY_FLUX_H
#define MASS_ENERGY_FLUX_H

struct MassFlux {
  /* Mass flux by evaporation into air from active layer (kg/m^2/s) */
  double evaporation_air;
};

struct EnergyFlux {
  /* Net allwave radiation (W/m^2) */
  double net_radiation;
  /* Sensible heat transfer from surface (W/m^2) */
  double sensible_heat;
  /* Latent heat transfer from surface (W/m^2) */
  double latent_heat;
};

#endif // MASS_ENERGY_FLUX_H
