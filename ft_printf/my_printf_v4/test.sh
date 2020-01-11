#!/bin/bash

echo "################ make ############"
make re
echo "################### gcc ###########################"
echo "[###################clean##########################]"
rm -fr zero
echo "[#################################################]"
gcc -g -Wall -Wextra -Werror -o zero main.c libftprintf.a && ./zero | cat -e 
