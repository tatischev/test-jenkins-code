#!/bin/sh
./test "-i"
if [ $? -eq 0 ]; then
   echo OK
else
   echo FAIL
fi
