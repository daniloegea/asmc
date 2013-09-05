#!/usr/local/bin/bash

INITVAL=`sysctl dev.asmc.0.light.control | awk '{print $2}'`

VAL=`yad --form --field=Lights:SCL "$INITVAL|" --scroll --columns=100 --separator=`
sysctl dev.asmc.0.light.control=$VAL
