#!/bin/sh

## use support libraries
# source ./scripts/colors.sh

cmake --clean ./.output/bin/
cmake -S ./sources/template/ -B ./.output/bin/
cmake --build ./.output/bin/
cmake --build ./.output/bin/ --target test


echo "Generate documentation"
doxygen ./documentation/Doxyfile




