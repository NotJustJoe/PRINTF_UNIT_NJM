#!/bin/bash

YES="y"
VALG="y"
FLAGs="y"
LEAKS="y"

read -p "Enable Valgrind ? [y/n]`echo $'\n> '`" VALG
read -p "Enable -Wall -Wextra -Werror ? [y/n]`echo $'\n> '`" FLAGS
if [ "${VALG}" == "${YES}" ]; then
	read -p "Enable FULL LEAKS Check ? [y/n]`echo $'\n> '`" LEAKS
fi

if [ "${FLAGS}" == "${YES}" ]; then
	sed -i '/^flags/s/=.*$/="-Wall -Wextra -Werror -w"/' ./config/user_settings.txt
	source ./config/user_settings.txt
	gcc_flags=${flags}
	echo "Your program will be compiled with $gcc_flags ."
else
	sed -i '/^flags/s/=.*$/="-w"/' ./config/user_settings.txt
	gcc_flags=""
	echo "No special flags will be used for the compilation ."
fi

if [ "${VALG}" == "${YES}" ] && [ "${LEAKS}" == "${YES}" ]; then	
	sed -i '/^valgrind_full/s/=.*$/="valgrind  --show-leak-kinds=all --leak-check=full --track-origins=yes -s"/' ./config/user_settings.txt
	source ./config/user_settings.txt
	gcc_valgrind=${valgrind_full}
	echo "Valgrind is enabled with following flags : $gcc_valgrind ."

elif [ "${VALG}" == "${YES}" ] && [ "${LEAKS}" != "${YES}" ]; then
	sed -i '/^valgrind_full/s/=.*$/="valgrind  --leak-check=full --track-origins=yes"/' ./config/user_settings.txt
	source ./config/user_settings.txt
	gcc_valgrind=${valgrind_full}
	echo "Valgrind is enabled with following flags : $gcc_valgrind ."	
	
else
	gcc_valgrind=""
	echo "No Valgrind will be used been enabled"

fi
source ./config/user_settings.txt
sed -i '/^has_been_run/s/=.*$/="y"/' ./config/user_settings.txt
echo
echo "The final compilation is : gcc ${gcc_flags} && ${gcc_valgrind}"
echo "Note that if you want to change these settings, you can rerun this script any time ."

#For any question, contact NotJustJoe#3756 on Discord or see GitHubs Links below ↓
#╔═════════════════════════════════════════════════════════════════════════╗
#║                    _____          __ _     _       _                    ║  
#║                   |_   _|        / _(_)   | |     | |                   ║
#║                     | |_ __ ___ | |_ _  __| | __ _| |                   ║
#║                     | | '__/ _ \|  _| |/ _` |/ _` | |                   ║
#║                     | | | | (_) | | | | (_| | (_| | |                   ║
#║                     \_/_|  \___/|_| |_|\__,_|\__,_|_|                   ║
#║                                                                         ║
#║                   __   __                                               ║
#║                   \ \ / /                                               ║
#║                    \ V /___  _   _ ___ ___  ___  _   _                  ║
#║                     \ // _ \| | | / __/ __|/ _ \| | | |                 ║
#║                     | | (_) | |_| \__ \__ \ (_) | |_| |                 ║
#║                     \_/\___/ \__,_|___/___/\___/ \__,_|                 ║
#║                                                                         ║
#║                     ____  _           _ _                               ║
#║                    / __ \| |         | | |                              ║
#║                   | |  | | |__   __ _| | |_ __ _                        ║
#║                   | |  | | '_ \ / _` | | __/ _` |                       ║
#║                   | |__| | |_) | (_| | | || (_| |                       ║
#║                    \____/|_.__/ \__,_|_|\__\__,_|                       ║
#║                                                                         ║
#║                                                                         ║
#╠═════════════════════════════════════════════════════════════════════════╣
#║                     - 42 Nice - France 12/03/2021 -                     ║ 
#║ 																           ║ 
#║         NotJustJoe // trofidal // https://github.com/NotJustJoe         ║ 
#║         junior-one // youssou  // https://github.com/junior-one         ║ 
#║         minikross  // obalta   // https://github.com/minikross          ║ 
#║ 																           ║ 
#╚═════════════════════════════════════════════════════════════════════════╝
