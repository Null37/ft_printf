#!/bin/bash

echo "################ make ############"
make fclean 
make re
echo "################### gcc ###########################"
gcc -o zero main.c libftprintf.a && ./zero | cat -e 
