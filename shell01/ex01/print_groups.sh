#!/bin/sh
FT_USER=student
groups $FT_USER | tr " " "," | tr -d "\n"
