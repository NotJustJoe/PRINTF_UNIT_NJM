/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:29:27 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/15 13:22:42 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

int				ft_function(const char *str, ...);

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
	char cmedium1 = 48;
	char cmedium2 = '0';
	char cmedium3 = 49;
	char cmedium4 = 120;
	char cmedium5 = 'b';
	/////////////
	// STRINGS //
	/////////////
	char *smedium1 = "I am a little sneaky boy";
	char *smedium2 = "Yo0";
	char *smedium3 = "I am a really long and really annoying line, do you like what you see ? ";
	char *smedium4 = "Et la il me dit, je ne viens pas, ah non non je ne viens pas, je vais faire gitteur";
	char *smedium5 = "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEET salut a tous les amiiiiiiis c'est David lafarge pokemon, aujourd'hui booster de carte pokemon !";
	//////////
	// PTRP //
	//////////
	int pmedium1 = 0;
	int pmedium2 = 19;
	int pmedium3 = 15489;
	int pmedium4 = -19;
	int pmedium5 = -0;
	/////////////////////////////
	// INT D || INT I || INT U //
	/////////////////////////////
	int dmedium1 = 0;
	int dmedium2 = 19;
	int dmedium3 = 15489;
	int dmedium4 = -19;
	int dmedium5 = -0;
	////////////////////
	// INT X || INT x //
	////////////////////
	int xmedium1 = 0;
	int xmedium2 = 19;
	int xmedium3 = 15489;
	int xmedium4 = -19;
	int xmedium5 = -0;

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
	function("%c\n", cmedium2); 
	function("%c\n", cmedium3); 
	function("%c\n", cmedium4);
	function("%c\n", cmedium5);
	function("%c\n", cmedium1);
	// 11 - 15 //
	function("%c Youssef\n", cmedium2);
	function("%c a 0123456a\n", cmedium3);
	function("%c Hi !\n", cmedium4);
	function("aaaaa %c aaaaaaa\n", cmedium5);
	function("%c 	l'erreur !\n", cmedium1);
	// 16 - 20 //
	function("%16c\n", cmedium2);
	function("%32c\n", cmedium3);
	function("%56c\n", cmedium4);
	function("%165c\n", cmedium5);
	function("%c %c\n", cmedium1, 'u');
	// 21 - 25 //
	function("t%c %c\n", cmedium2, 'a');
	function("o%c %c\n", cmedium3, '4');
	function("t%c %c\n", cmedium4, '2');
	function("o%c %c\n", cmedium5, '!');
	function("!%10c, %c\n", cmedium1, cmedium2);
	// 26 - 30 //
	function("b%12c, %c:D\n", cmedium2, cmedium3);
	function("a%65c, %c:O\n", cmedium3, cmedium4);
	function("b%98c, %cD:\n", cmedium4, cmedium5);
	function("a%1c, %c:>\n", cmedium5, cmedium5);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*c\n", 16, cmedium1); //1
	function("%*cT\n", 0, cmedium2); //2
	function("%*c\n", 10, cmedium3); //3
	function("%*c\n", -12, cmedium5); //4
	function("%c %*c\n", cmedium5, 12, cmedium4); //5
	// 36 - 40 //
	function("%95c\n", cmedium2); 
	function("%-16c\n", cmedium3); 
	function("%-32c\n", cmedium4);
	function("%32c\n", cmedium5);
	function("%*c\n", 15, cmedium1);
	// 41 - 45 //
	function("%*c Youssef\n", 65, cmedium2);
	function("%*c a 0123456a\n", 1, cmedium3);
	function("%*c Hi !\n", 62, cmedium4);
	function("aaaaa %*c aaaaaaa\n", 16, cmedium5);
	function("%*c 	l'erreur !\n", 1, cmedium1);
	// 45 - 50 //
	function("%16c\n", cmedium2);
	function("%32c\n", cmedium3);
	function("%1c\n", cmedium4);
	function("%16c\n", cmedium5);
	function("%32c %12c\n", cmedium1, 'u');
	// 51 - 55 //
	function("t%*c %*c\n", 32, 56, 49, cmedium5);
	function("o%*c %*c\n", 1, 59, 20, 65);
	function("t%1c %*c\n", 33, 76, 120);
	function("o%*c %20c\n", 1, 80, 76);
	function("!%10c, %*c\n", 39, 60, cmedium2);
	// 56 - 60 //
	function("b%12c, %20c:D\n", cmedium2, cmedium3);
	function("a%35c, %c:O\n", cmedium3, cmedium4);
	function("b%23c, %30cD:\n", cmedium4, cmedium5);
	function("a%31c, %*c:>\n", cmedium5, 20, cmedium5);
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
	function("%s\n", smedium1);
	// 5 - 10 //
	function("%s\n", smedium2);
	function("%s\n", smedium3);
	function("%s\n", smedium4);
	function("%s\n", smedium5);
	function("%s Hi i am\n", smedium1);
	// 10 - 15 //
	function("%s Youssef\n", smedium2);
	function("%s a 0123456a\n", smedium3);
	function("%s Hi !\n", smedium4);
	function("aaaaa %s aaaaaaa\n", smedium5);
	function("%5s\n", smedium1);
	// 15 - 20 //
	function("%16s\n", smedium2);
	function("%32s\n", smedium3);
	function("%56s\n", smedium4);
	function("%165s\n", smedium5);
	function("%s %s\n", smedium1, "smedium2");
	// 20 - 25 //
	function("%s %s\n", smedium2, "smedium3");
	function("%s %s\n", smedium3, "smedium4");
	function("%s %s\n", smedium4, "smedium5");
	function("%s %s\n", smedium5, "smedium5");
	function("%10s, %s\n", smedium1, smedium2);
	// 25 - 30 //
	function("%12s, %s\n", smedium2, smedium3);
	function("%65s, %s\n", smedium3, smedium4);
	function("%98s, %s\n", smedium4, smedium5);
	function("%1s, %s\n", smedium5, smedium5);
	function("%15s, %s\n", smedium5, smedium5);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*s\n", -16, smedium1); //1
	function("%*sT\n", -0, smedium2); //2
	function("%*s\n", 10, smedium3); //3
	function("%*s\n", -12, smedium5); //4
	function("%s %*s\n", smedium5, 12, smedium4); //5
	// 36 - 40 //
	function("%95s\n", smedium2); 
	function("%-16s\n", smedium3); 
	function("%-32s\n", smedium4);
	function("%32s\n", smedium5);
	function("%*s\n", 15, smedium1);
	// 41 - 45 //
	function("%*s Youssef\n", 65, smedium2);
	function("%*s a 0123456a\n", -1, smedium3);
	function("%*s Hi !\n", 62, smedium4);
	function("aaaaa %*s aaaaaaa\n", 16, smedium5);
	function("%*s 	l'erreur !\n", 1, smedium1);
	// 45 - 50 //
	function("%16s\n", smedium2);
	function("%32s\n", smedium3);
	function("%1s\n", smedium4);
	function("%16s\n", smedium5);
	function("%32s %12s\n", smedium1, "je suis un petit string :>");
	// 51 - 55 //
	function("t%*s %*s\n", -32, smedium1, 49, smedium5);
	function("o%*s %*s\n", -1, smedium3, 20, smedium2);
	function("t%1s %*s\n", smedium2, 76, smedium4);
	function("o%*s %20s\n", -1, smedium1, smedium3);
	function("!%10s, %*s\n", smedium5, 60, smedium2);
	// 56 - 60 //
	function("b%12s, %20s:D\n", smedium2, smedium3);
	function("a%35s, %s:O\n", smedium3, smedium4);
	function("b%23s, %30sD:\n", smedium4, smedium5);
	function("a%31s, %*s:>\n", smedium5, 20, smedium5);
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
	function("0\n", pmedium1);
	// 5 - 10 //
	function("%p\n", pmedium2);
	function("%p\n", pmedium3);
	function("%p\n", pmedium4);
	function("%p\n", pmedium5);
	function("%p Hi i am\n", pmedium1);
	// 10 - 15 //
	function("%p Youssef\n", pmedium2);
	function("%p a 0123456a\n", pmedium3);
	function("%p Hi !\n", pmedium4);
	function("aaaaa %p aaaaaaa\n", pmedium5);
	function("%ps\n", pmedium1);
	// 15 - 20 //
	function("%16p\n", pmedium2);
	function("%32p\n", pmedium3);
	function("%56p\n", pmedium4);
	function("%165p\n", pmedium5);
	function("%p %p\n", pmedium1, pmedium1);
	// 20 - 25 //
	function("%p %p\n", pmedium2, pmedium2);
	function("%p %p\n", pmedium3, pmedium2);
	function("%p %p\n", pmedium4, pmedium2);
	function("%p %p\n", pmedium5, pmedium2);
	function("%10d, %p\n", pmedium1, pmedium2);
	// 25 - 30 //
	function("%12p, %p\n", pmedium2, pmedium3);
	function("%65p, %p\n", pmedium3, pmedium4);
	function("%98p, %p\n", pmedium4, pmedium5);
	function("%1p, %p\n", pmedium5, pmedium5);
	function("%15p, %p\n", pmedium5, pmedium5);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*p\n", -16, pmedium1); //1
	function("%*pT\n", -0, pmedium2); //2
	function("%*p\n", 10, pmedium3); //3
	function("%*p\n", -12, pmedium5); //4
	function("%p %*p\n", pmedium5, 12, pmedium4); //5
	// 36 - 40 //
	function("%95p\n", pmedium2); 
	function("%-16p\n", pmedium3); 
	function("%-32p\n", pmedium4);
	function("%32p\n", pmedium5);
	function("%*p\n", 15, pmedium1);
	// 41 - 45 //
	function("%*p Youssef\n", 65, pmedium2);
	function("%*p a 0123456a\n", -1, pmedium3);
	function("%*p Hi !\n", 62, pmedium4);
	function("aaaaa %*p aaaaaaa\n", 16, pmedium5);
	function("%*p 	l'erreur !\n", 1, pmedium1);
	// 45 - 50 //
	function("%16p\n", pmedium2);
	function("%32p\n", pmedium3);
	function("%1p\n", pmedium4);
	function("%16p\n", pmedium5);
	function("%32p %12p\n", pmedium1, pmedium3);
	// 51 - 55 //
	function("t%*p %*p\n", -32, pmedium1, 49, pmedium5);
	function("o%*p %*p\n", -1, pmedium3, 20, pmedium2);
	function("t%1p %*p\n", pmedium2, 76, pmedium4);
	function("o%*p %20p\n", -1, pmedium1, pmedium3);
	function("!%10p, %*p\n", pmedium5, 60, pmedium2);
	// 56 - 60 //
	function("b%12p, %20p:D\n", pmedium2, pmedium3);
	function("a%35p, %p:O\n", pmedium3, pmedium4);
	function("b%23p, %30pD:\n", pmedium4, pmedium5);
	function("a%31p, %*p:>\n", pmedium5, 20, pmedium5);
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
	function("0\n", INT_MIN);
	// 5 - 10 //
	function("%d\n", dmedium2);
	function("%d\n", dmedium3);
	function("%d\n", dmedium4);
	function("%d\n", INT_MAX);
	function("%d Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%d Youssef\n", dmedium2);
	function("%d a 0123456a\n", dmedium3);
	function("%d Hi !\n", dmedium4);
	function("aaaaa %d aaaaaaa\n", dmedium5);
	function("%ds\n", INT_MAX);
	// 15 - 20 //
	function("%16d\n", dmedium2);
	function("%32d\n", INT_MIN);
	function("%56d\n", dmedium4);
	function("%165d\n", CHAR_MIN);
	function("%d %d\n", dmedium1, 1659);
	// 20 - 25 //
	function("%d %d\n", dmedium2, -1825);
	function("%d %d\n", CHAR_MAX, -165);
	function("%d %d\n", dmedium4, 165);
	function("%d %d\n", dmedium5, 75);
	function("%10d, %d\n", INT_MAX, dmedium2);
	// 25 - 30 //
	function("%12d, %d\n", dmedium2, INT_MIN);
	function("%65d, %d\n", dmedium3, dmedium4);
	function("%98d, %d\n", INT_MAX, dmedium5);
	function("%1d, %d\n", dmedium5, dmedium5);
	function("%15d, %d\n", dmedium5, INT_MAX);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*d\n", 16, dmedium1); //1
	function("%*dT\n", 0, CHAR_MAX); //2
	function("%*d\n", 10, dmedium3); //3
	function("%*d\n", -12, INT_MAX); //4
	function("%d %*d\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%95d\n", dmedium2); 
	function("%-16d\n", INT_MIN); 
	function("%-32d\n", dmedium4);
	function("%32d\n", dmedium5);
	function("%*d\n", 15,dmedium1);
	// 41 - 45 //
	function("%*d Youssef\n", -65,dmedium2);
	function("%*d a 0123456a\n", -0, INT_MAX);
	function("%*d Hi !\n", 62,dmedium4);
	function("aaaaa %*d aaaaaaa\n", 0, INT_MAX);
	function("%*d 	l'erreur !\n", -0,dmedium1);
	// 45 - 50 //
	function("%16d\n", dmedium2);
	function("%32d\n", INT_MIN);
	function("%0d\n", dmedium4);
	function("%16d\n", dmedium5);
	function("%32d %12d\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*d %*d\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*d %*d\n", -0, dmedium5, 20, dmedium2);
	function("t%-0d %*d\n", dmedium1, -20, INT_MAX);
	function("o%*d %-20d\n", 0, dmedium1, dmedium3);
	function("!%10d, %*d\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("b%-12d, %-20d:D\n", INT_MAX, dmedium3);
	function("a%65d, %d:O\n", dmedium3, dmedium4);
	function("b%98d, %-30dD:\n", dmedium4, CHAR_MIN);
	function("a%31d, %*d:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", INT_MIN);
	// 5 - 10 //
	function("%i\n", dmedium2);
	function("%i\n", dmedium3);
	function("%i\n", dmedium4);
	function("%i\n", INT_MAX);
	function("%i Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%i Youssef\n", dmedium2);
	function("%i a 0123456a\n", dmedium3);
	function("%i Hi !\n", dmedium4);
	function("aaaaa %i aaaaaaa\n", dmedium5);
	function("%is\n", INT_MAX);
	// 15 - 20 //
	function("%16i\n", dmedium2);
	function("%32i\n", INT_MIN);
	function("%56i\n", dmedium4);
	function("%165i\n", CHAR_MIN);
	function("%i %i\n", dmedium1, 1659);
	// 20 - 25 //
	function("%i %i\n", dmedium2, -1825);
	function("%i %i\n", CHAR_MAX, -165);
	function("%i %i\n", dmedium4, 165);
	function("%i %i\n", dmedium5, 75);
	function("%10i, %i\n", INT_MAX, dmedium2);
	// 25 - 30 //
	function("%12i, %i\n", dmedium2, INT_MIN);
	function("%65i, %i\n", dmedium3, dmedium4);
	function("%98i, %i\n", INT_MAX, dmedium5);
	function("%1i, %i\n", dmedium5, dmedium5);
	function("%15i, %i\n", dmedium5, INT_MAX);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*i\n", 16, dmedium1); //1
	function("%*iT\n", 0, CHAR_MAX); //2
	function("%*i\n", 10, dmedium3); //3
	function("%*i\n", -12, INT_MAX); //4
	function("%i %*i\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%95i\n", dmedium2); 
	function("%-16i\n", INT_MIN); 
	function("%-32i\n", dmedium4);
	function("%32i\n", dmedium5);
	function("%*i\n", 15,dmedium1);
	// 41 - 45 //
	function("%*i Youssef\n", -65,dmedium2);
	function("%*i a 0123456a\n", -0, INT_MAX);
	function("%*i Hi !\n", 62,dmedium4);
	function("aaaaa %*i aaaaaaa\n", 0, INT_MAX);
	function("%*i 	l'erreur !\n", -0,dmedium1);
	// 45 - 50 //
	function("%16i\n", dmedium2);
	function("%32i\n", INT_MIN);
	function("%0i\n", dmedium4);
	function("%16i\n", dmedium5);
	function("%32i %12i\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*i %*i\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*i %*i\n", -0, dmedium5, 20, dmedium2);
	function("t%-0i %*i\n", dmedium1, -20, INT_MAX);
	function("o%*i %-20i\n", 0, dmedium1, dmedium3);
	function("!%10i, %*i\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("b%-12i, %-20i:D\n", INT_MAX, dmedium3);
	function("a%65i, %i:O\n", dmedium3, dmedium4);
	function("b%98i, %-30iD:\n", dmedium4, CHAR_MIN);
	function("a%31i, %*i:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", INT_MIN);
	// 5 - 10 //
	function("%u\n", dmedium2);
	function("%u\n", dmedium3);
	function("%u\n", dmedium4);
	function("%u\n", INT_MAX);
	function("%u Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%u Youssef\n", dmedium2);
	function("%u a 0123456a\n", dmedium3);
	function("%u Hi !\n", dmedium4);
	function("aaaaa %u aaaaaaa\n", dmedium5);
	function("%us\n", INT_MAX);
	// 15 - 20 //
	function("%16u\n", dmedium2);
	function("%32u\n", INT_MIN);
	function("%56u\n", dmedium4);
	function("%165u\n", CHAR_MIN);
	function("%u %u\n", dmedium1, 1659);
	// 20 - 25 //
	function("%u %u\n", dmedium2, -1825);
	function("%u %u\n", CHAR_MAX, -165);
	function("%u %u\n", dmedium4, 165);
	function("%u %u\n", dmedium5, 75);
	function("%10u, %u\n", INT_MAX, dmedium2);
	// 25 - 30 //
	function("%12u, %u\n", dmedium2, INT_MIN);
	function("%65u, %u\n", dmedium3, dmedium4);
	function("%98u, %u\n", INT_MAX, dmedium5);
	function("%1u, %u\n", dmedium5, dmedium5);
	function("%15u, %u\n", dmedium5, INT_MAX);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*u\n", 16, dmedium1); //1
	function("%*uT\n", 0, CHAR_MAX); //2
	function("%*u\n", 10, dmedium3); //3
	function("%*u\n", -12, INT_MAX); //4
	function("%u %*u\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%95u\n", dmedium2); 
	function("%-16u\n", INT_MIN); 
	function("%-32u\n", dmedium4);
	function("%32u\n", dmedium5);
	function("%*u\n", 15,dmedium1);
	// 41 - 45 //
	function("%*u Youssef\n", -65,dmedium2);
	function("%*u a 0123456a\n", -0, INT_MAX);
	function("%*u Hi !\n", 62,dmedium4);
	function("aaaaa %*u aaaaaaa\n", 0, INT_MAX);
	function("%*u 	l'erreur !\n", -0,dmedium1);
	// 45 - 50 //
	function("%16u\n", dmedium2);
	function("%32u\n", INT_MIN);
	function("%0u\n", dmedium4);
	function("%16u\n", dmedium5);
	function("%32u %12u\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*u %*u\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*u %*u\n", -0, dmedium5, 20, dmedium2);
	function("t%-0u %*u\n", dmedium1, -20, INT_MAX);
	function("o%*u %-20u\n", 0, dmedium1, dmedium3);
	function("!%10u, %*u\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("b%-12u, %-20u:D\n", INT_MAX, dmedium3);
	function("a%65u, %u:O\n", dmedium3, dmedium4);
	function("b%98u, %-30uD:\n", dmedium4, CHAR_MIN);
	function("a%31u, %*u:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", INT_MIN);
	// 5 - 10 //
	function("%x\n", dmedium2);
	function("%x\n", dmedium3);
	function("%x\n", dmedium4);
	function("%x\n", INT_MAX);
	function("%x Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%x Youssef\n", dmedium2);
	function("%x a 0123456a\n", dmedium3);
	function("%x Hi !\n", dmedium4);
	function("aaaaa %x aaaaaaa\n", dmedium5);
	function("%xs\n", INT_MAX);
	// 15 - 20 //
	function("%16x\n", dmedium2);
	function("%32x\n", INT_MIN);
	function("%56x\n", dmedium4);
	function("%165x\n", CHAR_MIN);
	function("%x %x\n", dmedium1, 1659);
	// 20 - 25 //
	function("%x %x\n", dmedium2, -1825);
	function("%x %x\n", CHAR_MAX, -165);
	function("%x %x\n", dmedium4, 165);
	function("%x %x\n", dmedium5, 75);
	function("%10x, %x\n", INT_MAX, dmedium2);
	// 25 - 30 //
	function("%12x, %x\n", dmedium2, INT_MIN);
	function("%65x, %x\n", dmedium3, dmedium4);
	function("%98x, %x\n", INT_MAX, dmedium5);
	function("%1x, %x\n", dmedium5, dmedium5);
	function("%15x, %x\n", dmedium5, INT_MAX);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*x\n", 16, dmedium1); //1
	function("%*xT\n", 0, CHAR_MAX); //2
	function("%*x\n", 10, dmedium3); //3
	function("%*x\n", -12, INT_MAX); //4
	function("%x %*x\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%95x\n", dmedium2); 
	function("%-16x\n", INT_MIN); 
	function("%-32x\n", dmedium4);
	function("%32x\n", dmedium5);
	function("%*x\n", 15,dmedium1);
	// 41 - 45 //
	function("%*x Youssef\n", -65,dmedium2);
	function("%*x a 0123456a\n", -0, INT_MAX);
	function("%*x Hi !\n", 62,dmedium4);
	function("aaaaa %*x aaaaaaa\n", 0, INT_MAX);
	function("%*x 	l'erreur !\n", -0,dmedium1);
	// 45 - 50 //
	function("%16x\n", dmedium2);
	function("%32x\n", INT_MIN);
	function("%0x\n", dmedium4);
	function("%16x\n", dmedium5);
	function("%32x %12x\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*x %*x\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*x %*x\n", -0, dmedium5, 20, dmedium2);
	function("t%-0x %*x\n", dmedium1, -20, INT_MAX);
	function("o%*x %-20x\n", 0, dmedium1, dmedium3);
	function("!%10x, %*x\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("b%-12x, %-20x:D\n", INT_MAX, dmedium3);
	function("a%65x, %x:O\n", dmedium3, dmedium4);
	function("b%98x, %-30xD:\n", dmedium4, CHAR_MIN);
	function("a%31x, %*x:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", INT_MIN);
	// 5 - 10 //
	function("%X\n", dmedium2);
	function("%X\n", dmedium3);
	function("%X\n", dmedium4);
	function("%X\n", INT_MAX);
	function("%X Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%X Youssef\n", dmedium2);
	function("%X a 0123456a\n", dmedium3);
	function("%X Hi !\n", dmedium4);
	function("aaaaa %X aaaaaaa\n", dmedium5);
	function("%Xs\n", INT_MAX);
	// 15 - 20 //
	function("%16X\n", dmedium2);
	function("%32X\n", INT_MIN);
	function("%56X\n", dmedium4);
	function("%165X\n", CHAR_MIN);
	function("%X %X\n", dmedium1, 1659);
	// 20 - 25 //
	function("%X %X\n", dmedium2, -1825);
	function("%X %X\n", CHAR_MAX, -165);
	function("%X %X\n", dmedium4, 165);
	function("%X %X\n", dmedium5, 75);
	function("%10X, %X\n", INT_MAX, dmedium2);
	// 25 - 30 //
	function("%12X, %X\n", dmedium2, INT_MIN);
	function("%65X, %X\n", dmedium3, dmedium4);
	function("%98X, %X\n", INT_MAX, dmedium5);
	function("%1X, %X\n", dmedium5, dmedium5);
	function("%15X, %X\n", dmedium5, INT_MAX);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*X\n", 16, dmedium1); //1
	function("%*XT\n", 0, CHAR_MAX); //2
	function("%*X\n", 10, dmedium3); //3
	function("%*X\n", -12, INT_MAX); //4
	function("%X %*X\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%95X\n", dmedium2); 
	function("%-16X\n", INT_MIN); 
	function("%-32X\n", dmedium4);
	function("%32X\n", dmedium5);
	function("%*X\n", 15,dmedium1);
	// 41 - 45 //
	function("%*X Youssef\n", -65,dmedium2);
	function("%*X a 0123456a\n", -0, INT_MAX);
	function("%*X Hi !\n", 62,dmedium4);
	function("aaaaa %*X aaaaaaa\n", 0, INT_MAX);
	function("%*X 	l'erreur !\n", -0,dmedium1);
	// 45 - 50 //
	function("%16X\n", dmedium2);
	function("%32X\n", INT_MIN);
	function("%0X\n", dmedium4);
	function("%16X\n", dmedium5);
	function("%32X %12X\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*X %*X\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*X %*X\n", -0, dmedium5, 20, dmedium2);
	function("t%-0X %*X\n", dmedium1, -20, INT_MAX);
	function("o%*X %-20X\n", 0, dmedium1, dmedium3);
	function("!%10X, %*X\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("b%-12X, %-20X:D\n", INT_MAX, dmedium3);
	function("a%65X, %X:O\n", dmedium3, dmedium4);
	function("b%98X, %-30XD:\n", dmedium4, CHAR_MIN);
	function("a%31X, %*X:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", xmedium1);
	// 5 - 10 //
	function("%%\n");
	function("%%\n");
	function("%%\n");
	function("%%\n");
	function("%% Hi i am\n");
	// 10 - 15 //
	function("%% Youssef\n", xmedium2);
	function("%% a 0123456a\n", xmedium3);
	function("%% Hi !\n", xmedium4);
	function("aaaaa %% aaaaaaa\n", xmedium5);
	function("%%\n", xmedium1);
	// 15 - 20 //
	function("%16%\n", xmedium2);
	function("%32%\n", xmedium3);
	function("%56%\n", xmedium4);
	function("%1%\n", xmedium5);
	function("%% %%\n", xmedium1, 1659);
	// 20 - 25 //
	function("%% %%\n", xmedium2, -1825);
	function("%% %%\n", xmedium3, -165);
	function("%% %%\n", xmedium4, 165);
	function("%% %%\n", xmedium5, 75);
	function("%10%, %%\n", xmedium1, xmedium2);
	// 25 - 30 //
	function("%0%, %%245\n", xmedium2, xmedium3);
	function("%12%, %4%254\n", xmedium3, xmedium4);
	function("%%, %25%254\n", xmedium4, xmedium5);
	function("%1%, 245%2%254\n", xmedium5, xmedium5);
	function("%2%254, 254%44%\n", xmedium5, xmedium5);  
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 30 - 35 //
	function("%*d\n", 16, dmedium1); //1
	function("%5% %*i %%%%T\n", 0, CHAR_MAX); //2
	function("%17% %*d\n", 10, dmedium3); //3
	function("%*i %015%\n", -12, INT_MAX); //4
	function("%X %%%%%%%%%%%%%%% %*x\n", dmedium2, 12, dmedium4); //5
	// 36 - 40 //
	function("%5X %%%%%%\n", dmedium2); 
	function("%-16p %%\n", INT_MIN); 
	function("%-32x %84%\n", dmedium4);
	function("%17% %32u\n", dmedium5);
	function("%*X %17%\n", 15,dmedium1);
	// 41 - 45 //
	function("%1% %*d Youssef\n", -65,dmedium2);
	function("%*i %117% a 0123456a\n", -0, INT_MAX);
	function("%17% %*p  %17%Hi !\n", 62,dmedium4);
	function("%14%aaaaa %*u aaaaaaa\n", 0, INT_MAX);
	function("%*x 	l'err%*%eur !\n", -0,dmedium1, 12);
	// 45 - 50 //
	function("%16X\n", dmedium2);
	function("%7% %32u %42%\n", INT_MIN);
	function("%1%%7%%0d\n", dmedium4);
	function("%16p%%\n", dmedium5);
	function("%32X %1%%12x\n", INT_MAX, dmedium4);
	// 51 - 55 //
	function("t%*i %1%%*i\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%7%%*x %*X\n", -0, dmedium5, 20, dmedium2);
	function("t%-0d%117% %*u\n", dmedium1, -20, INT_MAX);
	function("o%*X %1%%-20X\n", 0, dmedium1, dmedium3);
	function("!%7%%10X, %%%*x\n", CHAR_MIN, 60, dmedium2);
	// 56 - 60 //
	function("%%b%-12x, %-20i:D\n", INT_MAX, dmedium3);
	function("a%65d, %17%%X:O\n", dmedium3, dmedium4);
	function("b%98i, %1%%-30xD:\n", dmedium4, CHAR_MIN);
	function("a%31X%19%, %*i:>\n", INT_MIN, 20, dmedium5);
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
	function("0\n", xmedium1);
	// 5 - 10 //
	function("%% %c\n", cmedium1);
	function("%% %c %s\n", cmedium2, smedium3);
	function("%% %s\n", smedium2);
	function("%% %s\n", smedium1);
	function("%% %d Hi i am\n", dmedium1);
	// 10 - 15 //
	function("%d %d%sYoussef\n", dmedium2, dmedium3);
	function("%d %d%ca 0123456a\n", dmedium3, dmedium5, cmedium3);
	function("%d %c %cHi !\n", dmedium4, cmedium4, cmedium5);
	function("aaaaa %d %s aaaaaaa\n", dmedium5, smedium4);
	function("%15d %s\n", dmedium1, smedium5);
	// 15 - 20 //
	function("%16% %s %d\n", smedium2, dmedium5);
	function("%32% %5s\n", smedium3);
	function("%56% %c\n", cmedium4);
	function("%15% %15d %16s\n", dmedium5, smedium2);
	function("%% %% %dd %c\n", dmedium1, 39);
	// 20 - 25 //
	function("%% %% %d\n", xmedium2, -1825);
	function("%% %0% %d %161% %65s\n", dmedium3, smedium3);
	function("%% %d%c%s%p\n", dmedium4, cmedium5, smedium2, pmedium2);
	function("%% %p%u%x%X\n", pmedium5, dmedium5, xmedium1, xmedium5);
	function("%10%, %%\n", xmedium1, xmedium2);
	// 25 - 30 //
	function("%11% %14d %6p %51s %x, %25%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%1% %14d %6p %51s753 %x, %245%2%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%12% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %25%2%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%2% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %2%25%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	/////////////////
	// MEDIUM PART //
	/////////////////
	// 31 - 35 //
	/*
	*
	* 					A FAIRE 					A FAIRE 					A FAIRE
	*
	*/
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	// 36 - 40 //
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	// 41 - 45 //
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	// 46 - 50 //
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	// 51 - 55 //
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
	// 56 - 60 //
	function("%10%, %%\n", xmedium1, xmedium2);
	function("%118782% %14d %6p %51s %x, %245%245\n", dmedium5, pmedium3, smedium4, xmedium5);
	function("%118782% %14d %6p %51s753 %x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium4);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2);
	function("qqq%118782% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", dmedium5, pmedium3, smedium4, xmedium5, smedium2, smedium3);
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