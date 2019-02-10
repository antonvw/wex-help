#!/bin/bash
# regenerate doxy pages for next wxExtension version

# location where wxExtension repository resides
export WXEXTENSION=${HOME}/wxExtension/extension

current=$(pwd)

# version directory where pages are generated
cd v19.04.0

# now run doxygen
doxygen ../Doxyfile

cd $current
