#!/bin/bash
# regenerate doxy pages for next wex version

# location where wex repository resides
export WEX=${HOME}/wex/

current=$(pwd)

# version directory where pages are generated
cd v24.10.0

# now run doxygen
doxygen ../Doxyfile

cd $current
