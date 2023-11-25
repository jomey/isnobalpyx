cmake_minimum_required(VERSION 3.25)
project(iSnobalPYX)

# Custom Catch2 install location
list(APPEND CMAKE_PREFIX_PATH "/data/micromamba/envs/isnobalpyx/include")

# Binary output location
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Add project structure
add_subdirectory(libisnobalpyx)
add_subdirectory(tests)
