#!/bin/bash

sed -e "s/theo1/Wile\ E.\ Coyote/g;s/steven1/Daffy\ Duck/g;s/arnaud1/Porky\ Pig/g;s/pierre-jean/Marvin\ the\ Martian/g" | grep 'Wile\|Daffy\|Porky\|Marvin'
exit 0
