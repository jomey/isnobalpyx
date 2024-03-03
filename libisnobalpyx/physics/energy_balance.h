#ifndef ENERGY_BALANCE_H
#define ENERGY_BALANCE_H

#include "../snowpack.h"
#include "../data/input_forcing.h"

int energy_balance(
    Snowpack& snowpack,
    InputForcing& input_forcing
    );

#endif // ENERGY_BALANCE_H
