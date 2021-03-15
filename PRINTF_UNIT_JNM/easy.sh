#!/bin/bash


RED='\e[31m' # RED
GREEN='\e[32m' # GREEN
CYAN='\e[36m' # CYAN
DGREY='\e[90m' #DARK GREY
BLINK='\e[5m' # BLINK
YELW='\e[33m' #Yellow
UL='\e[4m'
EUL='\e[24m'
BOLD='\e[1m'
ENDBLINK='\e[25'
NC='\e[97m' # No Color
SPACER_TOP="${DGREY}▛▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▜${NC}"
SPACER_START_EASY="${DGREY}▌                    ${GREEN}${BOLD}${UL}▶▶ F T _ P R I N T F ◀◀${EUL}${LBLUE}                                  ${GREEN}${BOLD}${UL}▶▶ E A S Y ◀◀${EUL}${DGREY}                    ▌${NC}"
SPACER_HEAD="${DGREY}▌                                                                                                              ▌${NC}"								
SPACER_BOT="${DGREY}▙▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▟${NC}"				
SPACER_KO="${DGREY}▌                                                   ${BOLD}${RED}▶▶ K O ◀◀${LBLUE}                                                 ${DGREY} ▌${NC}"
SPACER_OK="${DGREY}▌                                                   ${BOLD}${GREEN}▶▶ O K ◀◀${LBLUE}                                                  ${DGREY}▌${NC}"
SPACER_NAME_TOP="${DGREY}▛▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▜${NC}"
SPACER_C="▌          ${BOLD}${GREEN}▶▶ % C ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_S="▌          ${BOLD}${GREEN}▶▶ % S ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_D="▌          ${BOLD}${GREEN}▶▶ % D ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_I="▌          ${BOLD}${GREEN}▶▶ % I ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_P="▌          ${BOLD}${GREEN}▶▶ % P ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_x="▌          ${BOLD}${GREEN}▶▶ % x ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_X="▌          ${BOLD}${GREEN}▶▶ % X ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_F="▌          ${BOLD}${GREEN}▶▶ % F ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_G="▌          ${BOLD}${GREEN}▶▶ % G ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_N="▌          ${BOLD}${GREEN}▶▶ % N ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_E="▌          ${BOLD}${GREEN}▶▶ % E ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_U="▌          ${BOLD}${GREEN}▶▶ % U ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_VALGRIND="▌    ${BOLD}${GREEN}▶▶ V A L G R I N D ◀◀${LBLUE}    ${NC}▌${NC}"
SPACER_VALGRIND_KO="▌    ${BOLD}${RED}▶▶ V A L G R I N D ◀◀${LBLUE}    ${NC}▌${NC}"
SPACER_PERCENT="▌          ${BOLD}${GREEN}▶▶ % % ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_MIX="▌          ${BOLD}${GREEN}▶▶ MIX ◀◀${LBLUE}          ${NC}▌${NC}"
SPACER_NAME_BOT="${DGREY}▙▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▟${NC}"
NO="n"
source ./config/user_settings.txt
can_start=${has_been_run}
if [ "${can_start}" == "${NO}" ]; then
	echo
	echo "Please run the command bash config.sh before running this command to setup your compilation settings."
	echo
	exit
fi

source ./config/user_settings.txt
gcc_flags=${flags}
gcc_valgrind=${valgrind_full}
if [ ! -f "srcs" ]; then
	mkdir srcs
fi
if [ ! -f "out" ]; then
	mkdir out
fi
rm -rf ft.txt
rm -rf diff.txt
rm -rf  printf.txt
rm -rf out/fake.out out/real.out output_to_diff/fake_results.txt output_to_diff/real_results.txt
rm -rf ../*.o
rm -rf srcs/libftprintf.a
rm -rf output_to_diff/fake_results.txt output_to_diff/real_results.txt output_to_diff
rm -rf out/real.out out/fake.out
rm -rf ft.txt printf.txt diff.txt
make -C ../libft/
mkdir output_to_diff
gcc ${flags} ./mains/easy_main.c -D function="printf"  -o ./out/real.out
./out/real.out >> output_to_diff/real_results.txt
make -C ../
cp ../libftprintf.a ./srcs/
gcc ${flags} ./mains/easy_main.c ./srcs/libftprintf.a -D function="ft_printf"  -o ./out/fake.out
./out/fake.out >> output_to_diff/fake_results.txt
rm -rf results/results.log results/valgrind.log
${gcc_valgrind} --log-fd=9 9>> ./results/valgrind.log ./out/fake.out
VALGRIND_VALUE=`wc -l ./results/valgrind.log | cut -f1 -d' '`

clear

echo -e "${SPACER_TOP}\n${SPACER_HEAD}\n${SPACER_START_EASY}\n${SPACER_HEAD}\n${SPACER_BOT}${NC}"

echo
if [ "${VALGRIND_VALUE}" -ne "0" ]; then
	if [ "${VALGRIND_VALUE}" -lt "15" ]; then
		echo -e "${SPACER_NAME_TOP}\n${SPACER_VALGRIND}\n${SPACER_NAME_BOT}${NC}"
		echo
		echo -e "${BOLD}${GREEN}Memory OK ! A Valgrind log file is available in the results folder.${NC}"
	else
		echo -e "${SPACER_NAME_TOP}\n${SPACER_VALGRIND_KO}\n${SPACER_NAME_BOT}${NC}"
		echo
		echo -e "${BOLD}${RED}Memory ERROR ! Check the valgrind.log in the results folder${NC}"
	fi
fi
echo 

echo -e "${SPACER_NAME_TOP}\n${SPACER_C}\n${SPACER_NAME_BOT}${NC}"
echo
test_numb=1
note=0
tonext_spacer=30
sed -n ${test_numb}p output_to_diff/real_results.txt >> printf.txt
if [ -s output_to_diff/fake_results.txt ] ; then
while [ -s printf.txt ]
do
	rm -f printf.txt ft.txt printf_r.txt ft_r.txt
	sed -n ${test_numb}p output_to_diff/real_results.txt >> printf.txt
	sed -n ${test_numb}p output_to_diff/fake_results.txt >> ft.txt
	if [ $test_numb -lt 10 ] ; then
		echo -n ""
	else
		echo -n ""
	fi
	DIFF=$(diff ft.txt printf.txt)
	if [ "$DIFF" == "" ] ; then
 		echo -ne "\033[0;32m \xE2\x9C\x94	\033[0m"
		let "note += 1"
	else
 		echo -ne "$test_numb : \033[0;31m x	\033[0m"
		echo "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄ TEST NUMBER $test_numb : ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" >> diff.txt
		sed -n ${test_numb}p output_to_diff/fake_results.txt >> diff.txt
		echo >> diff.txt
		echo "$DIFF" >> diff.txt
		echo >> diff.txt		
	#ALLIGNEMENT, AU BOUT DE 10 TESTS \n
	fi
	let "j = $test_numb % 10"
	if [ $j -eq 0 ] ; then #Si J % 10 = 0 on \n
		echo
	fi #Si y % tonext spacer = 0 on met le prochain spacer
	let "y = $test_numb % ${tonext_spacer}"
	if [ $y -eq 0  -a $test_numb -eq ${tonext_spacer} ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_S}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 2)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_P}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 3)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_D}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 4)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_I}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 5)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_U}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 6)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_x}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 7)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_X}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 8)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_PERCENT}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	if [ $y -eq 0  -a $test_numb -eq $((tonext_spacer * 9)) ] ; then
		echo
		echo -e "${SPACER_NAME_TOP}\n${SPACER_MIX}\n${SPACER_NAME_BOT}${NC}"
		echo
	fi
	let "test_numb += 1"
done
echo
let "test_numb -= 1"
if [ $test_numb -eq $note ] ; then
 		echo -ne " \033[0;32m $note / $test_numb : On your way to the MEDIUM Test ! \033[0m \n" 

		echo -e "${SPACER_TOP}\n${SPACER_OK}\n${SPACER_BOT}${NC}\n"
	else
 		echo -ne "${BOLD}${GREEN} $note / $test_numb : Error have been found ! see results.log in results/results.log, if errors comes from MIX only, consider moving to the MEDIUM test ! \033[0m \n"

		echo -e "${SPACER_TOP}\n${SPACER_KO}\n${SPACER_BOT}${NC}\n"
	fi
	if [ "${VALGRIND_VALUE}" -lt "15" ]; then
		echo -e "${SPACER_NAME_TOP}\n${SPACER_VALGRIND}\n${SPACER_NAME_BOT}${NC}"
		echo
		echo -e "${BOLD}${GREEN}Memory OK ! A Valgrind log file is available in the results folder.${NC}"
	else
		echo -e "${SPACER_NAME_TOP}\n${SPACER_VALGRIND_KO}\n${SPACER_NAME_BOT}${NC}"
		echo
		echo -e "${BOLD}${RED}Memory ERROR ! Check the valgrind.log in the results folder${NC}"
	fi
echo

else
	echo -e "\033[0;31m \xEA\x93\xA5                    \xEA\x93\xA5 \033[0m"
	echo -ne "\033[4;31m/!\\"
	echo -ne "\033[0m\033[0;31m Does Not Compile \033[0m"
	echo -e "\033[4;31m/!\\"
fi
echo

make -C srcs/ fclean &> /dev/null
if [ -f "diff.txt" ]; then
	cp diff.txt results/results.log
fi
if [ -f "a.out" ]; then
	rm -rf a.out
fi
rm -rf ft.txt
rm -rf  printf.txt
rm -rf out/fake.out out/real.out output_to_diff/fake_results.txt output_to_diff/real_results.txt
rm -rf ../*.o
rm -rf srcs/libftprintf.a
rm -rf diff.txt

#https://misc.flogisoft.com/bash/tip_colors_and_formatting
#https://en.wikipedia.org/wiki/Box-drawing_character

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