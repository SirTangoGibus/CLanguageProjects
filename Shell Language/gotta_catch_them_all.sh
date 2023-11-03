#!/bin/bash

cut -d ':' -f5 | cut -d ' ' -f2 | grep -E -i ^$1 | wc -l   
exit 0
