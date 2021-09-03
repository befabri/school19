#!/bin/sh
pathroot=$(git rev-parse --show-toplevel)
git ls-files --others -i --exclude-standard $pathroot