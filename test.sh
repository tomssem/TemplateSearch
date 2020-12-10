#!/bin/bash

shift

./build.sh

cd build
ctest -s -r compact
