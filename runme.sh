#!/bin/sh

## use support libraries
# source ./scripts/colors.sh


cmake -S ./sources/project_cli_cpp/ -B ./.output/bin/project_cli_cpp/
cmake --build ./.output/bin/project_cli_cpp/

./.output/bin/project_cli_cpp/rp_cli_cpp

echo "Generate documentation"
doxygen ./documentation/Doxyfile




