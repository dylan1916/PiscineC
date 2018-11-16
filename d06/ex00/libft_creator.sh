#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
rm -rf *.o
ranlib libft.a
