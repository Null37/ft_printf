#!/bin/bash

echo "################ make ############"
make fclean 
make re
echo "################### gcc ###########################"
echo "[###################clean##########################]"
rm -fr zero
gcc -Wall -Wextra -Werror -o zero main.c libftprintf.a && ./zero | cat -e 
