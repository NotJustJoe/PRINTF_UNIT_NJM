#!/bin/bash

RED='\033[0;31m' # RED
GREEN='\033[1;32m' # GREEN
NC='\033[0m' # No Color
SPACER="${RED}---===---${NC}"

make fclean && make -s && make clean  -s && gcc ft_printf.c libftprintf.a 

printf "${SPACER} ${GREEN}RESULTS${NC} ${SPACER}\n"

./a.out

printf "${SPACER} ${GREEN}END${NC} ${SPACER}\n"