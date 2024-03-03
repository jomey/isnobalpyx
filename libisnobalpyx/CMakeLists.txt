add_library(libisnobalpyx
        physics/energy_balance/net_radiation.c physics/energy_balance/net_radiation.h
        physics/energy_balance.cpp physics/energy_balance.h
        data/input_forcing.cpp data/input_forcing.h
        snowpack.cpp snowpack.h
)
