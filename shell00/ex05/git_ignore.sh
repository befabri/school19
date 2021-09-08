#!/bin/sh
pathgitroot=$(git rev-parse --show-toplevel)
git ls-files -o -i --exclude-standard $pathgitroot
