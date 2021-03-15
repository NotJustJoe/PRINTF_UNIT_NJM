/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 23:01:01 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/12 23:01:01 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

int				ft_printf(const char *str, ...);

#define tofunction(x, ...) function("%s\n", x, a, b)
int main()
{
	/*	===== E A S Y ===== */
	/*	===== C H E C K _ R E T U R N E D _ C O N T E N T _ O N L Y ===== */
	/* cspdiuxX% */
	/*  */
	/* c s p d i u x X %*/
	//////////
	// CHAR //
	//////////
	char ceasy1 = 'T';
	char ceasy2 = 'o';
	char ceasy3 = '4';
	char ceasy4 = '2';
	char ceasy5 = 48;
	/////////////
	// STRINGS //
	/////////////
	char *seasy1 = "I am a little sneaky boy";
	char *seasy2 = "Yo0";
	char *seasy3 = "I am a really long and really annoying line, do you like what you see ? ";
	char *seasy4 = "Et la il me dit, je ne viens pas, ah non non je ne viens pas, je vais faire gitteur";
	char *seasy5 = "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEET salut a tous les amiiiiiiis c'est David lafarge pokemon, aujourd'hui booster de carte pokemon !";
	//////////
	// PTRP //
	//////////
	int peasy1 = 0;
	int peasy2 = 19;
	int peasy3 = 15489;
	int peasy4 = -19;
	int peasy5 = -0;
	/////////////////////////////
	// INT D || INT I || INT U //
	/////////////////////////////
	int deasy1 = 0;
	int deasy2 = 19;
	int deasy3 = 15489;
	int deasy4 = -19;
	int deasy5 = -0;
	////////////////////
	// INT X || INT x //
	////////////////////
	int xeasy1 = 0;
	int xeasy2 = 19;
	int xeasy3 = 15489;
	int xeasy4 = -19;
	int xeasy5 = -0;

/*
 _   __       
(_) / /       
   / /    ___ 
  / /    / __|
 / / _  | (__ 
/_/ (_)  \___|
             
*/
	// 1 - 5 //
	function("\n"); //1
	function("T\n"); //2
	function("o\n"); //3
	function("4\n"); //4
	function("2\n"); //5
	// 6 - 10 //
	function("%c\n", ceasy2); 
	function("%c\n", ceasy3); 
	function("%c\n", ceasy4);
	function("%c\n", ceasy5);
	function("%c\n", ceasy1);
	// 11 - 15 //
	function("%c Youssef\n", ceasy2);
	function("%c a 0123456a\n", ceasy3);
	function("%c Hi !\n", ceasy4);
	function("aaaaa %c aaaaaaa\n", ceasy5);
	function("%c 	l'erreur !\n", ceasy1);
	// 16 - 20 //
	function("%16c\n", ceasy2);
	function("%32c\n", ceasy3);
	function("%56c\n", ceasy4);
	function("%165c\n", ceasy5);
	function("%c %c\n", ceasy1, 'u');
	// 21 - 25 //
	function("t%c %c\n", ceasy2, 'a');
	function("o%c %c\n", ceasy3, '4');
	function("t%c %c\n", ceasy4, '2');
	function("o%c %c\n", ceasy5, '!');
	function("!%10c, %c\n", ceasy1, ceasy2);
	// 26 - 30 //
	function("b%12c, %c:D\n", ceasy2, ceasy3);
	function("a%65c, %c:O\n", ceasy3, ceasy4);
	function("b%98c, %cD:\n", ceasy4, ceasy5);
	function("a%1c, %c:>\n", ceasy5, ceasy5);
/*
 _   __      
(_) / /      
   / /   ___ 
  / /   / __|
 / / _  \__ \
/_/ (_) |___/

*/
	// 1 - 5 //
	function("Hi\n");
	function("  My name\n");
	function(" is \n");
	function("  Thomas \n");
	function("%s\n", seasy1);
	// 5 - 10 //
	function("%s\n", seasy2);
	function("%s\n", seasy3);
	function("%s\n", seasy4);
	function("%s\n", seasy5);
	function("%s Hi i am\n", seasy1);
	// 10 - 15 //
	function("%s Youssef\n", seasy2);
	function("%s a 0123456a\n", seasy3);
	function("%s Hi !\n", seasy4);
	function("aaaaa %s aaaaaaa\n", seasy5);
	function("%5s\n", seasy1);
	// 15 - 20 //
	function("%16s\n", seasy2);
	function("%32s\n", seasy3);
	function("%56s\n", seasy4);
	function("%165s\n", seasy5);
	function("%s %s\n", seasy1, "seasy2");
	// 20 - 25 //
	function("%s %s\n", seasy2, "seasy3");
	function("%s %s\n", seasy3, "seasy4");
	function("%s %s\n", seasy4, "seasy5");
	function("%s %s\n", seasy5, "seasy5");
	function("%10s, %s\n", seasy1, seasy2);
	// 25 - 30 //
	function("%12s, %s\n", seasy2, seasy3);
	function("%65s, %s\n", seasy3, seasy4);
	function("%98s, %s\n", seasy4, seasy5);
	function("%1s, %s\n", seasy5, seasy5);
	function("%15s, %s\n", seasy5, seasy5);
/*
  _   __        
 (_) / /        
    / /   _ __  
   / /   | '_ \ 
  / / _  | |_) |
 /_/ (_) | .__/ 
         | |    
         |_| 
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", peasy1);
	// 5 - 10 //
	function("%p\n", peasy2);
	function("%p\n", peasy3);
	function("%p\n", peasy4);
	function("%p\n", peasy5);
	function("%p Hi i am\n", peasy1);
	// 10 - 15 //
	function("%p Youssef\n", peasy2);
	function("%p a 0123456a\n", peasy3);
	function("%p Hi !\n", peasy4);
	function("aaaaa %p aaaaaaa\n", peasy5);
	function("%ps\n", peasy1);
	// 15 - 20 //
	function("%16p\n", peasy2);
	function("%32p\n", peasy3);
	function("%56p\n", peasy4);
	function("%165p\n", peasy5);
	function("%p %p\n", peasy1, peasy1);
	// 20 - 25 //
	function("%p %p\n", peasy2, peasy2);
	function("%p %p\n", peasy3, peasy2);
	function("%p %p\n", peasy4, peasy2);
	function("%p %p\n", peasy5, peasy2);
	function("%10d, %p\n", peasy1, peasy2);
	// 25 - 30 //
	function("%12p, %p\n", peasy2, peasy3);
	function("%65p, %p\n", peasy3, peasy4);
	function("%98p, %p\n", peasy4, peasy5);
	function("%1p, %p\n", peasy5, peasy5);
	function("%15p, %p\n", peasy5, peasy5);
/*
  _   __      _ 
 (_) / /     | |
    / /    __| |
   / /    / _` |
  / / _  | (_| |
 /_/ (_)  \__,_|                 
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", deasy1);
	// 5 - 10 //
	function("%d\n", deasy2);
	function("%d\n", deasy3);
	function("%d\n", deasy4);
	function("%d\n", deasy5);
	function("%d Hi i am\n", deasy1);
	// 10 - 15 //
	function("%d Youssef\n", deasy2);
	function("%d a 0123456a\n", deasy3);
	function("%d Hi !\n", deasy4);
	function("aaaaa %d aaaaaaa\n", deasy5);
	function("%ds\n", deasy1);
	// 15 - 20 //
	function("%16d\n", deasy2);
	function("%32d\n", deasy3);
	function("%56d\n", deasy4);
	function("%165d\n", deasy5);
	function("%d %d\n", deasy1, 1659);
	// 20 - 25 //
	function("%d %d\n", deasy2, -1825);
	function("%d %d\n", deasy3, -165);
	function("%d %d\n", deasy4, 165);
	function("%d %d\n", deasy5, 75);
	function("%10d, %d\n", deasy1, deasy2);
	// 25 - 30 //
	function("%12d, %d\n", deasy2, deasy3);
	function("%65d, %d\n", deasy3, deasy4);
	function("%98d, %d\n", deasy4, deasy5);
	function("%1d, %d\n", deasy5, deasy5);
	function("%15d, %d\n", deasy5, deasy5);
/*
  _   __  _ 
 (_) / / (_)
    / /   _ 
   / /   | |
  / / _  | |
 /_/ (_) |_|
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", deasy1);
	// 5 - 10 //
	function("%i\n", deasy2);
	function("%i\n", deasy3);
	function("%i\n", deasy4);
	function("%i\n", deasy5);
	function("%i Hi i am\n", deasy1);
	// 10 - 15 //
	function("%i Youssef\n", deasy2);
	function("%i a 0123456a\n", deasy3);
	function("%i Hi !\n", deasy4);
	function("aaaaa %i aaaaaaa\n", deasy5);
	function("%is\n", deasy1);
	// 15 - 20 //
	function("%16i\n", deasy2);
	function("%32i\n", deasy3);
	function("%56i\n", deasy4);
	function("%165i\n", deasy5);
	function("%i %i\n", deasy1, 1659);
	// 20 - 25 //
	function("%i %i\n", deasy2, -1825);
	function("%i %i\n", deasy3, -165);
	function("%i %i\n", deasy4, 165);
	function("%i %i\n", deasy5, 75);
	function("%10i, %i\n", deasy1, deasy2);
	// 25 - 30 //
	function("%12i, %i\n", deasy2, deasy3);
	function("%65i, %i\n", deasy3, deasy4);
	function("%98i, %i\n", deasy4, deasy5);
	function("%1i, %i\n", deasy5, deasy5);
	function("%15i, %i\n", deasy5, deasy5);
/*
  _   __        
 (_) / /        
    / /   _   _ 
   / /   | | | |
  / / _  | |_| |
 /_/ (_)  \__,_|
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", deasy1);
	// 5 - 10 //
	function("%u\n", deasy2);
	function("%u\n", deasy3);
	function("%u\n", deasy4);
	function("%u\n", deasy5);
	function("%u Hi i am\n", deasy1);
	// 10 - 15 //
	function("%u Youssef\n", deasy2);
	function("%u a 0123456a\n", deasy3);
	function("%u Hi !\n", deasy4);
	function("aaaaa %u aaaaaaa\n", deasy5);
	function("%us\n", deasy1);
	// 15 - 20 //
	function("%16u\n", deasy2);
	function("%32u\n", deasy3);
	function("%56u\n", deasy4);
	function("%165u\n", deasy5);
	function("%u %u\n", deasy1, 1659);
	// 20 - 25 //
	function("%u %u\n", deasy2, -1825);
	function("%u %u\n", deasy3, -165);
	function("%u %u\n", deasy4, 165);
	function("%u %u\n", deasy5, 75);
	function("%10u, %u\n", deasy1, deasy2);
	// 25 - 30 //
	function("%12u, %u\n", deasy2, deasy3);
	function("%65u, %u\n", deasy3, deasy4);
	function("%98u, %u\n", deasy4, deasy5);
	function("%1u, %u\n", deasy5, deasy5);
	function("%15u, %u\n", deasy5, deasy5);
/*
  _   __                   _       
 (_) / /                  (_)      
    / /  __  __  _ __ ___  _ _ __  
   / /   \ \/ / | '_ ` _ \| | '_ \ 
  / / _   >  <  | | | | | | | | | |
 /_/ (_) /_/\_\ |_| |_| |_|_|_| |_|
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", xeasy1);
	// 5 - 10 //
	function("%x\n", xeasy2);
	function("%x\n", xeasy3);
	function("%x\n", xeasy4);
	function("%x\n", xeasy5);
	function("%x Hi i am\n", xeasy1);
	// 10 - 15 //
	function("%x Youssef\n", xeasy2);
	function("%x a 0123456a\n", xeasy3);
	function("%x Hi !\n", xeasy4);
	function("aaaaa %x aaaaaaa\n", xeasy5);
	function("%xs\n", xeasy1);
	// 15 - 20 //
	function("%16x\n", xeasy2);
	function("%32x\n", xeasy3);
	function("%56x\n", xeasy4);
	function("%165x\n", xeasy5);
	function("%x %x\n", xeasy1, 1659);
	// 20 - 25 //
	function("%x %x\n", xeasy2, -1825);
	function("%x %x\n", xeasy3, -165);
	function("%x %x\n", xeasy4, 165);
	function("%x %x\n", xeasy5, 75);
	function("%10x, %x\n", xeasy1, xeasy2);
	// 25 - 30 //
	function("%12x, %x\n", xeasy2, xeasy3);
	function("%65x, %x\n", xeasy3, xeasy4);
	function("%98x, %x\n", xeasy4, xeasy5);
	function("%1x, %x\n", xeasy5, xeasy5);
	function("%15x, %x\n", xeasy5, xeasy5);      
/*
  _   __ __   __
 (_) / / \ \ / /
    / /   \ V / 
   / /     > <  
  / / _   / . \ 
 /_/ (_) /_/ \_\
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", xeasy1);
	// 5 - 10 //
	function("%X\n", xeasy2);
	function("%X\n", xeasy3);
	function("%X\n", xeasy4);
	function("%X\n", xeasy5);
	function("%X Hi i am\n", xeasy1);
	// 10 - 15 //
	function("%X Youssef\n", xeasy2);
	function("%X a 0123456a\n", xeasy3);
	function("%X Hi !\n", xeasy4);
	function("aaaaa %X aaaaaaa\n", xeasy5);
	function("%Xs\n", xeasy1);
	// 15 - 20 //
	function("%16X\n", xeasy2);
	function("%32X\n", xeasy3);
	function("%56X\n", xeasy4);
	function("%165X\n", xeasy5);
	function("%X %X\n", xeasy1, 1659);
	// 20 - 25 //
	function("%X %X\n", xeasy2, -1825);
	function("%X %X\n", xeasy3, -165);
	function("%X %X\n", xeasy4, 165);
	function("%X %X\n", xeasy5, 75);
	function("%10X, %X\n", xeasy1, xeasy2);
	// 25 - 30 //
	function("%12X, %X\n", xeasy2, xeasy3);
	function("%65X, %X\n", xeasy3, xeasy4);
	function("%98X, %X\n", xeasy4, xeasy5);
	function("%1X, %X\n", xeasy5, xeasy5);
	function("%15X, %X\n", xeasy5, xeasy5);   
/*
  _   __  _   __
 (_) / / (_) / /
    / /     / / 
   / /     / /  
  / / _   / / _ 
 /_/ (_) /_/ (_)
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", xeasy1);
	// 5 - 10 //
	function("%%\n");
	function("%%\n");
	function("%%\n");
	function("%%\n");
	function("%% Hi i am\n");
	// 10 - 15 //
	function("%% Youssef\n", xeasy2);
	function("%% a 0123456a\n", xeasy3);
	function("%% Hi !\n", xeasy4);
	function("aaaaa %% aaaaaaa\n", xeasy5);
	function("%%\n", xeasy1);
	// 15 - 20 //
	function("%16%\n", xeasy2);
	function("%32%\n", xeasy3);
	function("%56%\n", xeasy4);
	function("%165%\n", xeasy5);
	function("%% %%\n", xeasy1, 1659);
	// 20 - 25 //
	function("%% %%\n", xeasy2, -1825);
	function("%% %%\n", xeasy3, -165);
	function("%% %%\n", xeasy4, 165);
	function("%% %%\n", xeasy5, 75);
	function("%10%, %%\n", xeasy1, xeasy2);
	// 25 - 30 //
	function("%1%, %2%\n", xeasy2, xeasy3);
	function("%6%, %2%\n", xeasy3, xeasy4);
	function("%9%, %4%\n", xeasy4, xeasy5);
	function("%1%, %4%\n", xeasy5, xeasy5);
	function("%1%, %4%\n", xeasy5, xeasy5);  
/*
  _   __  __  __ _______   __
 (_) / / |  \/  |_   _\ \ / /
    / /  | \  / | | |  \ V / 
   / /   | |\/| | | |   > <  
  / / _  | |  | |_| |_ / . \ 
 /_/ (_) |_|  |_|_____/_/ \_\
*/
	// 1 - 5 //
	function("89417891\n");
	function("961491\n");
	function("-1518\n");
	function("+15\n");
	function("0\n", xeasy1);
	// 5 - 10 //
	function("%% %c\n", ceasy1);
	function("%% %c %s\n", ceasy2, seasy3);
	function("%% %s\n", seasy2);
	function("%% %s\n", seasy1);
	function("%% %d Hi i am\n", deasy1);
	// 10 - 15 //
	function("%d %d%sYoussef\n", deasy2, deasy3);
	function("%d %d%ca 0123456a\n", deasy3, deasy5, ceasy3);
	function("%d %c %cHi !\n", deasy4, ceasy4, ceasy5);
	function("aaaaa %d %s aaaaaaa\n", deasy5, seasy4);
	function("%15d %s\n", deasy1, seasy5);
	// 15 - 20 //
	function("%16% %s %d\n", seasy2, deasy5);
	function("%32% %5s\n", seasy3);
	function("%56% %c\n", ceasy4);
	function("%165% %15d %16s\n", deasy5, seasy2);
	function("%% %% %dd %c\n", deasy1, 39);
	// 20 - 25 //
	function("%% %% %d\n", xeasy2, -1825);
	function("%% %5151% %d %161% %65s\n", deasy3, seasy3);
	function("%% %d%c%s%p\n", deasy4, ceasy5, seasy2, peasy2);
	function("%% %p%u%x%X\n", peasy5, deasy5, xeasy1, xeasy5);
	function("%10%, %%\n", xeasy1, xeasy2);
	// 25 - 30 //
	function("%1% %14d %6p %51s %x, %35%245\n", deasy5, peasy3, seasy4, xeasy5);
	function("%11% %14d %6p %11s753 %x, %2%245%s\n", deasy5, peasy3, seasy4, xeasy5, seasy4);
	function("qqq%12% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %2%5%s\n", deasy5, peasy3, seasy4, xeasy5, seasy2);
	function("qqq%12% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %5%5%s%16s\n", deasy5, peasy3, seasy4, xeasy5, seasy2, seasy3);
	function("zertzert%0%zert %14d6216 %6p %51s+3156 %16x, %2%245 %u\n", deasy5, peasy3, seasy4, xeasy5, deasy5);
}

/*
For any question, contact NotJustJoe#3756 on Discord or see GitHubs Links below ↓
╔═════════════════════════════════════════════════════════════════════════╗
║                    _____          __ _     _       _                    ║  
║                   |_   _|        / _(_)   | |     | |                   ║
║                     | |_ __ ___ | |_ _  __| | __ _| |                   ║
║                     | | '__/ _ \|  _| |/ _` |/ _` | |                   ║
║                     | | | | (_) | | | | (_| | (_| | |                   ║
║                     \_/_|  \___/|_| |_|\__,_|\__,_|_|                   ║
║                                                                         ║
║                   __   __                                               ║
║                   \ \ / /                                               ║
║                    \ V /___  _   _ ___ ___  ___  _   _                  ║
║                     \ // _ \| | | / __/ __|/ _ \| | | |                 ║
║                     | | (_) | |_| \__ \__ \ (_) | |_| |                 ║
║                     \_/\___/ \__,_|___/___/\___/ \__,_|                 ║
║                                                                         ║
║                     ____  _           _ _                               ║
║                    / __ \| |         | | |                              ║
║                   | |  | | |__   __ _| | |_ __ _                        ║
║                   | |  | | '_ \ / _` | | __/ _` |                       ║
║                   | |__| | |_) | (_| | | || (_| |                       ║
║                    \____/|_.__/ \__,_|_|\__\__,_|                       ║
║                                                                         ║
║                                                                         ║
╠═════════════════════════════════════════════════════════════════════════╣
║                     - 42 Nice - France 12/03/2021 -                     ║ 
║ 																          ║ 
║         NotJustJoe // trofidal // https://github.com/NotJustJoe         ║ 
║         junior-one // youssou  // https://github.com/junior-one         ║ 
║         minikross  // obalta   // https://github.com/minikross          ║ 
║ 																          ║ 
╚═════════════════════════════════════════════════════════════════════════╝
*/