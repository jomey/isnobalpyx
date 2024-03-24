add_library(libisnobalpyx
        data/input_forcing.h data/snowlayers.h data/flux.h data/run_configuration.h
        snowpack.cpp snowpack.h
        physics/energy_balance/net_radiation.c physics/energy_balance/net_radiation.h
        physics/energy_balance.cpp physics/energy_balance.h
)
