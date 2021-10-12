#!/bin/sh

## use support libraries
# source ./scripts/colors.sh

cmake -S ./sources/template/ -B ./.output/bin/
cmake --build ./.output/bin/


echo "TryBinary"

./.output/bin/Template 4294967296

./.output/bin/Template 10

./.output/bin/Template 

echo "Generate documentation"
doxygen ./documentation/Doxyfile




