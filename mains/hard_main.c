/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 11:29:27 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/17 20:16:00 by trofidal         ###   ########.fr       */
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
	char chard1 = 0;				// CHAR //
	char chard2 = 10;
	char chard3 = 32;
	char chard4 = 120;
	char chard5 = '\0';
	// STRINGS //
	char *shard1 = "Aurais-tu deja entendu parler de l'histoire tragique de Dark Plagueis le sage ? Non. ca ne m'etonne pas.";
	char *shard2 = "Vous aimez bien One piece ? Moi j'adore ! vous connaissez pas ? ";
	char *shard3 = NULL;
	char *shard4 = "";
	char *shard5 = "Donc la, tu penses que ton ft_printf est bon MDR allez, pour la forme, tu vas print pi jusqu'a la 10 000 eme decimal ! c'est parti ! pi=pi=3.14159 2653";
	int phard1 = -1;				// PTRP //
	int phard2 = 1;
	int phard3 = ULONG_MAX;
	int phard4 = -ULONG_MAX;
	int phard5 = LONG_MAX;
	int dhard1 = INT_MAX;			// INT D || INT I || INT U //
	int dhard2 = INT_MIN;
	int dhard3 = CHAR_MAX;
	int dhard4 = -69420;
	int dhard5 = -0;
	int xhard1 = 0;					// INT X || INT x //
	int xhard2 = UINT_MAX;
	int xhard3 = LONG_MAX;
	int xhard4 = CHAR_MAX;
	int xhard5 = UINT_MAX + 1;
	function("\n");					// _   __       
	function("T\n");				//(_) / /       
	function("o\n");				//   / /    ___ 
	function("4\n");				//  / /    / __|
	function("2\n");				// / / _  | (__ 
	function("%c\n", chard2);		///_/ (_)  \___|
	function("%c\n", chard3);
	function("%c\n", chard4);
	function("%c\n", chard5);
	function("%c\n", chard1);
	function("%c Youssef\n", chard2);
	function("%c a 0123456a\n", chard3);
	function("%c Hi !\n", chard4);
	function("aaaaa %c aaaaaaa\n", chard5);
	function("%c 	l'erreur !\n", chard1);
	function("%16c\n", chard2);
	function("%32c\n", chard3);
	function("%56c\n", chard4);
	function("%165c\n", chard5);
	function("%c %c\n", chard1, 'u');
	function("t%c %c\n", chard2, 'a');
	function("o%c %c\n", chard3, '4');
	function("t%c %c\n", chard4, '2');
	function("o%c %c\n", chard5, '!');
	function("!%10c, %c\n", chard1, chard2);
	function("b%12c, %c:D\n", chard2, chard3);
	function("a%65c, %c:O\n", chard3, chard4);
	function("b%98c, %cD:\n", chard4, chard5);
	function("a%1c, %c:>\n", chard5, chard5);
	function("!%10.21c, %18.5c\n", chard1, chard2);
	function("%*c\n", 16, chard1);
	function("%*cT\n", 0, chard2);
	function("%*c\n", 10, chard3);
	function("%*cT\n", 0, chard4);
	function("%%%%%*cT\n", 0, chard5);
	function("%*c\n", -12, chard5);
	function("%c %*c\n", chard5, 12, chard4);
	function("%95c\n", chard2); 
	function("%-16c\n", chard3); 
	function("%-32c\n", chard4);
	function("%32c\n", chard5);
	function("%*c\n", 15, chard1);
	function("%*c Youssef\n", 65, chard2);
	function("%*c a 0123456a\n", 1, chard3);
	function("%*c Hi !\n", 62, chard4);
	function("aaaaa %*c aaaaaaa\n", 16, chard5);
	function("%*c 	l'erreur !\n", 1, chard1);
	function("%16c\n", chard2);
	function("%32c\n", chard3);
	function("%1c\n", chard4);
	function("%16c\n", chard5);
	function("%32c %12c\n", chard1, 'u');
	function("t%*c %*c\n", 32, 56, 49, chard5);
	function("o%*c %*c\n", 1, 59, 20, 65);
	function("t%1c %*c\n", 33, 76, 120);
	function("o%*c %20c\n", 1, 80, 76);
	function("!%10c, %*c\n", 39, 60, chard2);
	function("b%12c, %20c:D\n", chard2, chard3);
	function("a%35c, %c:O\n", chard3, chard4);
	function("b%23c, %30cD:\n", chard4, chard5);
	function("a%31c, %*c:>\n", chard5, 20, chard5);
	function("b%2c, %33.0cD:\n", chard4, chard5);
	function("d%%%c d%%%.1c #x%c", chard5, chard2, chard3);
	function("o%-*.c<>w%%c%32% %20c\n", 1, 80, 76);
	function("{{##^@àée)=))=_=éèé&². d%% %%c.c%{{{35c 35#c 351.2c#x 35%10c}}}]", chard5, chard2, chard3);
	function("{{##^@àée)=))=_=éèé&². d%% %%c.c%]}@@@@^^^{{{35c 35#c 351.2c#x 35%10c}}}]", chard5, chard2, chard3);
	function("35c 35#c 351.2c#x 35%10c", chard5, chard2, chard3);
	function("d%%%c d%%%.1c #x%c", chard5, chard2, chard3);
	function("%---%%0.#x%c%*c\n", 42, 32, 65);
	function("{{##^@àée)=))=_=éèé&². d%% %%c.c%{{{35c 35#c 351.2c#x 35%10c}}}]", chard5, chard2, chard3);
	function("%2%%%c-.3%%%c3.2%6c", (char)128,(char)129,(char)130);
	function("35c 35#c 351.2c#x 35%10c", chard5, chard2, chard3);
	function("c%#1.c%%[%-3.25c]", chard5);
	function("%---%125%0.#x%c%*c\n", 42, 32, 65);
	function(". d.03d%% %%c.c%{{2c#x 35%10c}}}]", chard5, chard2);
	function("{{##^@àée)=))=_=éèé&². d%% %.%]}@@@@^^^{{{35c 35# 351.2#x 35%%10}}}]");
	function("3#c 31.2c#x 35%2.20c", chard3);
	function("Hi\n");				// _   __      
	function("  My name\n");		//(_) / /      
	function(" is \n");				//   / /   ___ 
	function("  Thomas \n");		//  / /   / __|
	function("%7.56s\n", shard1);	// / / _  \__ ;
	function("%-2.36s\n", shard2);	///_/ (_) |___/
	function("%0.12s\n", shard3);
	function("%-0.95s\n", shard4);
	function("%10.23s\n", shard5);
	function("%-.1s Hi i am\n", shard1);
	function("%.32s Youssef\n", shard2);
	function("%-19.1s a 0123456a\n", shard3);
	function("%32.6s Hi !\n", shard4);
	function("aaaaa %-2.32s aaaaaaa\n", shard5);
	function("%1.15s\n", shard1);
	function("%14.16s\n", shard2);
	function("%-32.34s\n", shard3);
	function("%56.4s\n", shard4);
	function("%-65.1s\n", shard5);
	function("%1.1s %-2.2s\n", shard1, "shard2");
	function("%3.65s %-2.2s\n", shard2, "shard3");
	function("%32.22s %20.32s\n", shard3, "shard4");
	function("%-1.35s %3.45s\n", shard4, "shard5");
	function("%4.47s %-45.14s\n", shard5, "shard5");
	function("%10.2s, %-12.12s\n", shard1, shard2);
	function("%12.45s, %-1.1s\n", shard2, shard3);
	function("%-65.32s, %52.5s\n", shard3, shard4);
	function("%98.32s, %18.32s\n", shard4, shard5);
	function("%-1.18s, %-5.68s\n", shard5, shard5);
	function("%15.14s, %4.41s %0.2s\n", shard5, shard5, shard5);
	function("%*.2s\n", -16, shard1);
	function("%*.6sT\n", -0, shard2);
	function("%*.6s\n", 10, shard3);
	function("%*.56s\n", -12, shard5);
	function("%02.3s %*.2s\n", shard5, 12, shard4);
	function("%95.2s\n", shard2); 
	function("%-162.2s\n", shard3); 
	function("%-32.1s\n", shard4);
	function("%32.1s\n", shard5);
	function("%-*.1s\n", 15, shard1);
	function("%-*.8s Youssef\n", 65, shard2);
	function("%*.0s a 0123456a\n", -1, shard3);
	function("%-*.0s Hi !\n", 62, shard4);
	function("aaaaa %*.63s aaaaaaa\n", 16, shard5);
	function("%-*.8s 	l'erreur !\n", 1, shard1);
	function("%-16.7s\n", shard2);
	function("%-32.7s\n", shard3);
	function("%1.85s\n", shard4);
	function("%16.12s\n", shard5);
	function("%-32.4s %12s\n", shard1, "je suis un petit string :>");
	function("t%--*.53s %*.4s\n", -32, shard1, 49, shard5);
	function("o%*.0s %*.1s\n", -1, shard3, 20, shard2);
	function("t%-1.0s %*.0s\n", shard2, 76, shard4);
	function("o%*.0s %20.0s\n", -1, shard1, shard3);
	function("!%-10.0s, %*.0s\n", shard5, 60, shard2);
	function("b%12.2s, %20.7s:D\n", shard2, shard3);
	function("a%35.1s, %.2s:O\n", shard3, shard4);
	function("b%23.12s, %30.3sD:\n", shard4, shard5);
	function("a%31.2s, %*.45s %5.32s:>\n", shard5, 20, shard5, shard5);
	function("a%%==%s, %*%%.45s %%%5.32s:>\n", shard5, 20, shard5, shard5);
	function("%%-1.-------0s%%s.%%s%%s-5035%%.%%s%%1.2s%-----350.*s",-50, shard1);
	function("35c 35s35x35d%-.s",658, -32, NULL, NULL);
	function("35c this is an easy test 35s35x35d%-.s",658,-32,"\000000000000000");
	function("%%35%%c%% y%%o%%u r%%e%%a%%l%%l%%y%% %%f%%a%%i%%l%%e%%d%% %%t%%h%%i%%s%% ? %%35s%%35x%%35d%-.s",658,-32,"\000000000000000");
	function("35c this is a%%%%%%%%%%%%%%%%%%s%26.36sn easy tes%%t %%35s%%35x%%35d%-.s",shard2,"\000000000000000");
	function("GG you failed successfully %#%s%%n.////",658,-32,"NU\0LL");
	function("35s 35#s 351.2s#x 35%10s", shard5, shard2, shard3);
	function("%---%%%0.x%s%32s\n", shard2, shard4);
	function("s%#1.s%%d%%s[%-3.25s]", shard5);
	function("d%%%s d%%%.1s #x%s", shard5, shard2, shard3);
	function("%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4);
	function("%25s%14s%3.2s%24.1%0.0s%--------0.31s%--01.1s%-.4s%0-.26s%12.1s%24.1s%12.s%.s%.1s%1.1s%11.1s%42.1s%14.4s%44.s%.4s",shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4);
	function("%-000000000000000-.3s%s%s%s%%%s%s%s%s%%1%s%s%s%%%s%s%%%s%%12%s%s%s%s%s%s",shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4);
	function("%0-0-0-s%0-0-0-s%0-0-0-s%0-0-0-s%----5.26s%s%0-0-0-s%s%s%0-0-0-s%----5.26s%0-0-0-s%s%0-0-0-s%----5.26s%s%0-0-0-s%----5.26s%0-0-0-s%----5.26s",shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4);
	function("%s%s%----5.26s%s%s%----5.26s%%----5.26ss%s%----5.26%----5.26ss%s%s%%----5.26ss%s%s%s%----5.26s%s%s%----5.26s%s%s%s%s%s%s",shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4, shard3 ,shard4);
	function("89417891\n");			//  _   __        
	function("961491\n");			// (_) / /        
	function("-1518\n");			//    / /   _ __  
	function("+15\n");				//   / /   | '_ \ 
	function("0\n", phard1);		//  / / _  | |_) |
	function("%p\n", phard2);		// /_/ (_) | .__/ 
	function("%p\n", phard3);		//         | |    
	function("%p\n", phard4);		//         |_| 
	function("%p\n", phard5);
	function("%p Hi i am\n", phard1);
	function("%p Youssef\n", phard2);
	function("%p a 0123456a\n", phard3);
	function("%p Hi !\n", phard4);
	function("aaaaa %p aaaaaaa\n", phard5);
	function("%ps\n", phard1);
	function("%16p\n", phard2);
	function("%32p\n", phard3);
	function("%56p\n", phard4);
	function("%165p\n", phard5);
	function("%p %p\n", phard1, phard1);
	function("%p %p\n", phard2, phard2);
	function("%p %p\n", phard3, phard2);
	function("%p %p\n", phard4, phard2);
	function("%p %p\n", phard5, phard2);
	function("%10d, %p\n", phard1, phard2);
	function("%12p, %p\n", phard2, phard3);
	function("%65p, %p\n", phard3, phard4);
	function("%98p, %p\n", phard4, phard5);
	function("%1p, %p\n", phard5, phard5);
	function("%15p, %p\n", phard5, phard5);
	function("%*p\n", -16, phard1);
	function("%*pT\n", -0, phard2);
	function("%*p\n", 10, phard3);
	function("%*p\n", -12, phard5);
	function("%p %*p\n", phard5, 12, phard4);
	function("%95p\n", phard2); 
	function("%-16p\n", phard3); 
	function("%-32p\n", phard4);
	function("%32p\n", phard5);
	function("%*p\n", 15, phard1);
	function("%*p Youssef\n", 65, phard2);
	function("%*p a 0123456a\n", -1, phard3);
	function("%*p Hi !\n", 62, phard4);
	function("aaaaa %*p aaaaaaa\n", 16, phard5);
	function("%*p 	l'erreur !\n", 1, phard1);
	function("%16p\n", phard2);
	function("%32p\n", phard3);
	function("%1p\n", phard4);
	function("%16p\n", phard5);
	function("%32p %12p\n", phard1, phard3);
	function("t%*p %*p\n", -32, phard1, 49, phard5);
	function("o%*p %*p\n", -1, phard3, 20, phard2);
	function("t%1p %*p\n", phard2, 76, phard4);
	function("o%*p %20p\n", -1, phard1, phard3);
	function("!%10p, %*p\n", phard5, 60, phard2);
	function("b%12p, %20p:D\n", phard2, phard3);
	function("a%35p, %p:O\n", phard3, phard4);
	function("b%23p, %30pD:\n", phard4, phard5);
	function("a%31p, %*p:>\n", phard5, 20, phard5);
	function("a%%%%%%%%%%%1p, %%%%s%%%*p:>\n", phard5, 20, phard5);
	function("%-0-0-0-58p\n", phard2);
	function("%0-*p\n", 15, phard3);
	function("%%1.2.32626.2%%p%1p\n", phard4);
	function("%13p\n", NULL);
	function("%-0p %-0-00-0-0--0-0-0-03p\n", phard1, phard3);
	function("t%000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000-1p %*p\n", -32, phard1, 49, phard5);
	function("%-13p%-13p%-13p%-13p%-13p%-13p%-13p%-13p%-13p%-13p%-13p%-13p\n", NULL, phard3, NULL, phard2, phard4,NULL, phard3, NULL, phard2, phard4, NULL, 0);
	function("t%5p %!!%*p\n", phard2, 76, phard4);
	function("o%*.p %20p\n", -1, phard1, phard3);
	function("!%1.0p, %%*.....0%%p\n", phard5, 60, phard2);
	function("b%12p, %20.p:D\n", phard2, phard3);
	function("a%!!%*p, %p:O\n", phard3, NULL);
	function("b%!!!!%23p, %30pD:\n", phard4, phard5);
	function("a%31!%%p, %!!%*p:>\n", phard5, 20, phard5);
	function("a%31plo%p, %12p:>\n", phard5, 20, phard5);
	function("89417891\n");			//  _   __      _ 
	function("961491\n");			// (_) / /     | |
	function("-1518\n");			//    / /    __| |
	function("+15\n");				//   / /    / _` |
	function("0\n", INT_MIN);		//  / / _  | (_| |
	function("%d\n", dhard2);		// /_/ (_)  \__,_|            
	function("%d\n", dhard3);
	function("%d\n", dhard4);
	function("%d\n", INT_MAX);
	function("%d Hi i am\n", dhard1);
	function("%d Youssef\n", dhard2);
	function("%d a 0123456a\n", dhard3);
	function("%d Hi !\n", dhard4);
	function("aaaaa %d aaaaaaa\n", dhard5);
	function("%ds\n", INT_MAX);
	function("%16d\n", dhard2);
	function("%32d\n", INT_MIN);
	function("%56d\n", dhard4);
	function("%165d\n", CHAR_MIN);
	function("%d %d\n", dhard1, 1659);
	function("%d %d\n", dhard2, -1825);
	function("%d %d\n", CHAR_MAX, -165);
	function("%d %d\n", dhard4, 165);
	function("%d %d\n", dhard5, 75);
	function("%10d, %d\n", INT_MAX, dhard2);
	function("%12d, %d\n", dhard2, INT_MIN);
	function("%65d, %d\n", dhard3, dhard4);
	function("%98d, %d\n", INT_MAX, dhard5);
	function("%1d, %d\n", dhard5, dhard5);
	function("%15d, %d\n", dhard5, INT_MAX);
	function("%*d\n", 16, dhard1);
	function("%*dT\n", 0, CHAR_MAX);
	function("%*d\n", 10, dhard3);
	function("%*d\n", -12, INT_MAX);
	function("%d %*d\n", dhard2, 12, dhard4);
	function("%95d\n", dhard2); 
	function("%-16d\n", INT_MIN); 
	function("%-32d\n", dhard4);
	function("%32d\n", dhard5);
	function("%*d\n", 15, dhard1);
	function("%*d Youssef\n", -65, dhard2);
	function("%*d a 0123456a\n", -0, INT_MAX);
	function("%*d Hi !\n", 62, dhard4);
	function("aaaaa %*d aaaaaaa\n", 0, INT_MAX);
	function("%*d 	l'erreur !\n", -0, dhard1);
	function("%16d\n", dhard2);
	function("%32d\n", INT_MIN);
	function("%0d\n", dhard4);
	function("%16d\n", dhard5);
	function("%32d %12d\n", INT_MAX, dhard4);
	function("t%*d %*d\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*d %*d\n", -0, dhard5, 20, dhard2);
	function("t%0d %*d\n", dhard1, -20, INT_MAX);
	function("o%*d %-20d\n", 0, dhard1, dhard3);
	function("!%10d, %*d\n", CHAR_MIN, 60, dhard2);
	function("b%-12d, %-20d:D\n", INT_MAX, dhard3);
	function("a%65d, %d:O\n", dhard3, dhard4);
	function("b%98d, %-30dD:\n", dhard4, CHAR_MIN);
	function("a%31d, %*d:>\n", INT_MIN, 20, dhard5);
	function("a%65d, %d:O\n", CHAR_MIN, CHAR_MAX);
	function("bd%-0050-012d%d, d%-0050-012d%d%0.-20d:D\n", INT_MAX, dhard3);
	function("a%0*.*d, %0*.*d:O\n",12, NULL, dhard3, NULL, NULL, dhard4);
	function("b%----------------9.8d, %-------0000000000---00000000000---------30dD:\n", dhard4, CHAR_MIN);
	function("a%-NULLd, %*.-NULLd:>\n", INT_MIN, 20, dhard5);
	function("a%65d, %d:O\n", CHAR_MIN, CHAR_MAX);
	function("b%-12d, %-20d:D\n", INT_MAX, dhard3);
	function("a%-0000-65d, %-0000-d:O\n", dhard3, dhard4);
	function("b%--045-.98d, %-----% %-3NULL0dD:\n", dhard4, CHAR_MIN);
	function("a%.--...31d, %*.12d:>\n", 35, 20, dhard5);
	function("a%6....5d, %18.......15d:%d%dO\n", CHAR_MIN, CHAR_MAX);
	function("%..----.10*..d",-41, 42);
	function("a%6...-5d, %3.6----5d:O\n", dhard3, dhard4);
	function("b%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%dD:\n", dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, dhard5, dhard3, dhard4, dhard5, dhard3);
	function("a%D%D%D%D%%31d, %*%%%d:>\n", INT_MIN, 20, dhard5);
	function("a%0.00000000.5d, %12.63d:O\n", CHAR_MIN, CHAR_MAX);
	function("89417891\n"); 	//   _   __  _ 
	function("961491\n");		//  (_) / / (_)
	function("-1518\n");		//     / /   _ 
	function("+15\n");			//    / /   | |
	function("0\n", INT_MIN);	//   / / _  | |	
	function("%i\n", dhard2);	//  /_/ (_) |_|
	function("%i\n", dhard3);
	function("%i\n", dhard4);
	function("%i\n", INT_MAX);
	function("%i Hi i am\n", dhard1);
	function("%i Youssef\n", dhard2);
	function("%i a 0123456a\n", dhard3);
	function("%i Hi !\n", dhard4);
	function("aaaaa %i aaaaaaa\n", dhard5);
	function("%isd\n", INT_MAX);
	function("%16i\n", dhard2);
	function("%32i\n", INT_MIN);
	function("%56i\n", dhard4);
	function("%165i\n", CHAR_MIN);
	function("%i %i\n", dhard1, 1659);
	function("%i %i\n", dhard2, -1825);
	function("%i %i\n", CHAR_MAX, -165);
	function("%i %i\n", dhard4, 165);
	function("%i %i\n", dhard5, 75);
	function("%10i, %i\n", INT_MAX, dhard2);
	function("%12i, %i\n", dhard2, INT_MIN);
	function("%65i, %i\n", dhard3, dhard4);
	function("%98i, %i\n", INT_MAX, dhard5);
	function("%1i, %i\n", dhard5, dhard5);
	function("%15i, %i\n", dhard5, INT_MAX);
	function("%*i\n", 16, dhard1);
	function("%*iT\n", 0, CHAR_MAX);
	function("%*i\n", 10, dhard3);
	function("%*i\n", -12, INT_MAX);
	function("%i %*i\n", dhard2, 12, dhard4);
	function("%95i\n", dhard2); 
	function("%-16i\n", INT_MIN); 
	function("%-32i\n", dhard4);
	function("%32i\n", dhard5);
	function("%*i\n", 15, dhard1);
	function("%*i Youssef\n", -65, dhard2);
	function("%*i a 0123456a\n", -0, INT_MAX);
	function("%*i Hi !\n", 62, dhard4);
	function("aaaaa %*i aaaaaaa\n", 0, INT_MAX);
	function("%*i 	l'erreur !\n", -0, dhard1);
	function("%16i\n", dhard2);
	function("%32i\n", INT_MIN);
	function("%0i\n", dhard4);
	function("%16i\n", dhard5);
	function("%32i %12i\n", INT_MAX, dhard4);
	function("t%*i %*i\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*i %*i\n", -0, dhard5, 20, dhard2);
	function("t%-0i %*i\n", dhard1, -20, INT_MAX);
	function("o%*i %-20i\n", 0, dhard1, dhard3);
	function("!%10i, %*i\n", CHAR_MIN, 60, dhard2);
	function("b%-12i, %-20i:D\n", INT_MAX, dhard3);
	function("a%65i, %i:O\n", dhard3, dhard4);
	function("b%98i, %-30iD:\n", dhard4, CHAR_MIN);
	function("a%31i, %*i:>\n", INT_MIN, 20, dhard5);
	function("bi%-0050-012i%i, i%-0050-012i%i%0.-20i:D\n", INT_MAX, dhard3);
	function("a%0*.*i, %0*.*i:O\n",12, NULL, dhard3, NULL, NULL, dhard4);
	function("b%----------------9.8i, %-------0000000000---00000000000---------30iD:\n", dhard4, CHAR_MIN);
	function("a%-NULLi, %*.-NULLi:>\n", 37, 20, dhard5);
	function("a%65i, %i:O\n", CHAR_MIN, CHAR_MAX);
	function("b%-12i, %-20i:D\n", INT_MAX, dhard3);
	function("a%-0000-65i, %-0000-i:O\n", dhard3, dhard4);
	function("b%--045-.98i, %-----% %-3NULL0iD:\n", dhard4, CHAR_MIN);
	function("a%.--...31i, %*.12i:>\n", 61, 20, dhard5);
	function("a%6....5i, %18.......15i:%i%iO\n", CHAR_MIN, CHAR_MAX);
	function("%..----.10*..i",-41, 42);
	function("a%6...-5i, %3.6----5i:O\n", dhard3, dhard4);
	function("b%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%iD:\n", dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard2, dhard4, dhard5, dhard3, dhard2, dhard4, dhard5, dhard3);
	function("a%D%D%D%D%%31i, %*%%%i:>\n", INT_MIN, 20, dhard5);
	function("a%0.00000000.5i, %12.63i:O\n", CHAR_MIN, CHAR_MAX);
	function("89417891\n");			//  _   __        
	function("961491\n");			// (_) / /        
	function("-1518\n");			//    / /   _   _ 
	function("+15\n");				//   / /   | | | |
	function("0\n", INT_MIN);		//  / / _  | |_| |
	function("%u\n", dhard2);		// /_/ (_)  \__,_|
	function("%u\n", dhard3);
	function("%u\n", dhard4);
	function("%u\n", INT_MAX);
	function("%u Hi i am\n", dhard1);
	function("%u Youssef\n", dhard2);
	function("%u a 0123456a\n", dhard3);
	function("%u Hi !\n", dhard4);
	function("aaaaa %u aaaaaaa\n", dhard5);
	function("%us\n", INT_MAX);
	function("%16u\n", dhard2);
	function("%32u\n", INT_MIN);
	function("%56u\n", dhard4);
	function("%165u\n", CHAR_MIN);
	function("%u %u\n", dhard1, 1659);
	function("%u %u\n", dhard2, -1825);
	function("%u %u\n", CHAR_MAX, -165);
	function("%u %u\n", dhard4, 165);
	function("%u %u\n", dhard5, 75);
	function("%10u, %u\n", INT_MAX, dhard2);
	function("%12u, %u\n", dhard2, INT_MIN);
	function("%65u, %u\n", dhard3, dhard4);
	function("%98u, %u\n", INT_MAX, dhard5);
	function("%1u, %u\n", dhard5, dhard5);
	function("%15u, %u\n", dhard5, INT_MAX);
	function("%*u\n", 16, dhard1);
	function("%*uT\n", 0, CHAR_MAX);
	function("%*u\n", 10, dhard3);
	function("%*u\n", -12, INT_MAX);
	function("%u %*u\n", dhard2, 12, dhard4);
	function("%95u\n", dhard2); 
	function("%-16u\n", INT_MIN); 
	function("%-32u\n", dhard4);
	function("%32u\n", dhard5);
	function("%*u\n", 15,dhard1);
	function("%*u Youssef\n", -65,dhard2);
	function("%*u a 0123456a\n", -0, INT_MAX);
	function("%*u Hi !\n", 62, dhard4);
	function("aaaaa %*u aaaaaaa\n", 0, INT_MAX);
	function("%*u 	l'erreur !\n", -0,dhard1);
	function("%16u\n", dhard2);
	function("%32u\n", INT_MIN);
	function("%0u\n", dhard4);
	function("%16u\n", dhard5);
	function("%32u %12u\n", INT_MAX, dhard4);
	function("t%*u %*u\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*u %*u\n", -0, dhard5, 20, dhard2);
	function("t%-0u %*u\n", dhard1, -20, INT_MAX);
	function("o%*u %-20u\n", 0, dhard1, dhard3);
	function("!%10u, %*u\n", CHAR_MIN, 60, dhard2);
	function("b%-12u, %-20u:D\n", INT_MAX, dhard3);
	function("a%65u, %u:O\n", dhard3, dhard4);
	function("b%98u, %-30uD:\n", dhard4, CHAR_MIN);
	function("a%31u, %*u:>\n", 12, 20, dhard5);
	function("bu%-0050-012u%u, u%-0050-012u%u%0.-20u:D\n", INT_MAX, dhard3);
	function("a%0*.*u, %0*.*u:O\n",12, NULL, dhard3, NULL, NULL, dhard4);
	function("b%----------------9.8u, %-------0000000000---00000000000---------30uD:\n", dhard4, CHAR_MIN);
	function("a%-NULLu, %*.-NULLu:>\n", 29, 20, dhard5);
	function("a%65u, %u:O\n", CHAR_MIN, CHAR_MAX);
	function("b%-12u, %-20u:D\n", INT_MAX, dhard3);
	function("a%-0000-65u, %-0000-u:O\n", dhard3, dhard4);
	function("b%--045-.98u, %-----% %-3NULL0uD:\n", dhard4, CHAR_MIN);
	function("a%.--...31u, %*.12u:>\n", 32, 20, dhard5);
	function("a%6....5u, %18.......15u:%u%uO\n", CHAR_MIN, CHAR_MAX);
	function("%..----.10*..u",-41, 42);
	function("a%6...-5u, %3.6----5u:O\n", dhard3, dhard4);
	function("b%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%u%uD:\n", dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3, dhard4, CHAR_MIN, dhard2, dhard4, dhard5, dhard3);
	function("a%D%D%D%D%%31u, %*%%%u:>\n", -32, 20, dhard5);
	function("a%0.00000000.5u, %12.63u:O\n", CHAR_MIN, CHAR_MAX);
	function("89417891\n");				//  _   __                   _       
	function("961491\n");				// (_) / /                  (_)      
	function("-1518\n");				//    / /  __  __  _ __ ___  _ _ __  
	function("+15\n");					//   / /   \ \/ / | '_ ` _ \| | '_ \ 
	function("0\n", INT_MIN);			//  / / _   >  <  | | | | | | | | | |
	function("%x\n", xhard2);			// /_/ (_) /_/\_\ |_| |_| |_|_|_| |_|
	function("%x\n", xhard3);
	function("%x\n", xhard4);
	function("%x\n", INT_MAX);
	function("%x Hi i am\n", xhard1);
	function("%x Youssef\n", xhard2);
	function("%x a 0123456a\n", xhard3);
	function("%x Hi !\n", xhard4);
	function("aaaaa %x aaaaaaa\n", xhard5);
	function("%xs\n", INT_MAX);
	function("%16x\n", xhard2);
	function("%32x\n", INT_MIN);
	function("%56x\n", xhard4);
	function("%165x\n", CHAR_MIN);
	function("%x %x\n", xhard1, 1659);
	function("%x %x\n", xhard2, -1825);
	function("%x %x\n", CHAR_MAX, -165);
	function("%x %x\n", xhard4, 165);
	function("%x %x\n", xhard5, 75);
	function("%10x, %x\n", INT_MAX, xhard2);
	function("%12x, %x\n", xhard2, INT_MIN);
	function("%65x, %x\n", xhard3, xhard4);
	function("%98x, %x\n", INT_MAX, xhard5);
	function("%1x, %x\n", xhard5, xhard5);
	function("%15x, %x\n", xhard5, INT_MAX);
	function("%*x\n", 16, xhard1);
	function("%*xT\n", 0, CHAR_MAX);
	function("%*x\n", 10, xhard3);
	function("%*x\n", -12, INT_MAX);
	function("%x %*x\n", xhard2, 12, xhard4);
	function("%95x\n", xhard2); 
	function("%-16x\n", INT_MIN); 
	function("%-32x\n", xhard4);
	function("%32x\n", xhard5);
	function("%*x\n", 15, xhard1);
	function("%*x Youssef\n", -65,xhard2);
	function("%*x a 0123456a\n", -0, INT_MAX);
	function("%*x Hi !\n", 62, xhard4);
	function("aaaaa %*x aaaaaaa\n", 0, INT_MAX);
	function("%*x 	l'erreur !\n", -0, xhard1);
	function("%16x\n", xhard2);
	function("%32x\n", INT_MIN);
	function("%0x\n", xhard4);
	function("%16x\n", xhard5);
	function("%32x %12x\n", INT_MAX, xhard4);
	function("t%*x %*x\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*x %*x\n", -0, xhard5, 20, xhard2);
	function("t%-0x %*x\n", xhard1, -20, INT_MAX);
	function("o%*x %-20x\n", 0, xhard1, xhard3);
	function("!%10x, %*x\n", CHAR_MIN, 60, xhard2);
	function("b%-12x, %-20x:D\n", INT_MAX, xhard3);
	function("a%65x, %x:O\n", xhard3, xhard4);
	function("b%98x, %-30xD:\n", xhard4, CHAR_MIN);
	function("a%31x, %*x:>\n", INT_MIN, 20, xhard5);
	function("bx%-0050-012x%x, x%-0050-012x%x%0.-20x:D\n", INT_MAX, xhard3);
	function("a%0*.*x, %0*.*x:O\n",12, NULL, xhard3, NULL, NULL, xhard4);
	function("b%----------------9.8x, %-------0000000000---00000000000---------30xD:\n", xhard4, CHAR_MIN);
	function("a%-NULLx, %*.-NULLx:>\n", 19, 20, xhard5);
	function("a%65x, %x:O\n", CHAR_MIN, CHAR_MAX);
	function("b%-12x, %-20x:D\n", INT_MAX, xhard3);
	function("a%-0000-65x, %-0000-x:O\n", xhard3, xhard4);
	function("b%--045-.98x, %-----% %-3NULL0xD:\n", xhard4, CHAR_MIN);
	function("a%.--...31x, %*.12x:>\n", 19, 20, xhard5);
	function("a%6....5x, %18.......15x:%x%xO\n", CHAR_MIN, CHAR_MAX);
	function("%..----.10*..x",-41, 42);
	function("a%6...-5x, %3.6----5x:O\n", xhard3, xhard4);
	function("b%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%x%xD:\n", xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, xhard5, xhard3, xhard4, xhard5, xhard3);
	function("a%D%D%D%D%%31x, %*%%%x:>\n", INT_MIN, 20, xhard5);
	function("a%0.00000000.5x, %12.63x:O\n", CHAR_MIN, CHAR_MAX);
	function("89417891\n");				//  _   __ __   __
	function("961491\n");				// (_) / / \ \ / /
	function("-1518\n");				//    / /   \ V / 
	function("+15\n");					//   / /     > <  
	function("0\n", INT_MIN);			//  / / _   / . \ 
	function("%X\n", xhard2);			// /_/ (_) /_/ \_;
	function("%X\n", xhard3);
	function("%X\n", xhard4);
	function("%X\n", INT_MAX);
	function("%X Hi i am\n", xhard1);
	function("%X Youssef\n", xhard2);
	function("%X a 0123456a\n", xhard3);
	function("%X Hi !\n", xhard4);
	function("aaaaa %X aaaaaaa\n", xhard5);
	function("%Xs\n", INT_MAX);
	function("%16X\n", xhard2);
	function("%32X\n", INT_MIN);
	function("%56X\n", xhard4);
	function("%165X\n", CHAR_MIN);
	function("%X %X\n", xhard1, 1659);
	function("%X %X\n", xhard2, -1825);
	function("%X %X\n", CHAR_MAX, -165);
	function("%X %X\n", xhard4, 165);
	function("%X %X\n", xhard5, 75);
	function("%10X, %X\n", INT_MAX, xhard2);
	function("%12X, %X\n", xhard2, INT_MIN);
	function("%65X, %X\n", xhard3, xhard4);
	function("%98X, %X\n", INT_MAX, xhard5);
	function("%1X, %X\n", xhard5, xhard5);
	function("%15X, %X\n", xhard5, INT_MAX);
	function("%*X\n", 16, xhard1);
	function("%*XT\n", 0, CHAR_MAX);
	function("%*X\n", 10, xhard3);
	function("%*X\n", -12, INT_MAX);
	function("%X %*X\n", xhard2, 12, xhard4);
	function("%95X\n", xhard2); 
	function("%-16X\n", INT_MIN); 
	function("%-32X\n", xhard4);
	function("%32X\n", xhard5);
	function("%*X\n", 15,xhard1);
	function("%*X Youssef\n", -65,xhard2);
	function("%*X a 0123456a\n", -0, INT_MAX);
	function("%*X Hi !\n", 62,xhard4);
	function("aaaaa %*X aaaaaaa\n", 0, INT_MAX);
	function("%*X 	l'erreur !\n", -0,xhard1);
	function("%16X\n", xhard2);
	function("%32X\n", INT_MIN);
	function("%0X\n", xhard4);
	function("%16X\n", xhard5);
	function("%32X %12X\n", INT_MAX, xhard4);
	function("t%*X %*X\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*X %*X\n", -0, xhard5, 20, xhard2);
	function("t%-0X %*X\n", xhard1, -20, INT_MAX);
	function("o%*X %-20X\n", 0, xhard1, xhard3);
	function("!%10X, %*X\n", CHAR_MIN, 60, xhard2);
	function("b%-12X, %-20X:D\n", INT_MAX, xhard3);
	function("a%65X, %X:O\n", xhard3, xhard4);
	function("b%98X, %-30XD:\n", xhard4, CHAR_MIN);
	function("a%31X, %*X:>\n", INT_MIN, 20, xhard5);
	function("bX%-0050-012X%X, X%-0050-012X%X%0.-20X:D\n", INT_MAX, xhard3);
	function("a%0*.*X, %0*.*X:O\n",12, NULL, xhard3, NULL, NULL, xhard4);
	function("b%----------------9.8X, %-------0000000000---00000000000---------30XD:\n", xhard4, CHAR_MIN);
	function("a%-NULLX, %*.-NULLX:>\n", 32, 20, xhard5);
	function("a%65X, %X:O\n", CHAR_MIN, CHAR_MAX);
	function("b%-12X, %-20X:D\n", INT_MAX, xhard3);
	function("a%-0000-65X, %-0000-X:O\n", xhard3, xhard4);
	function("b%--045-.98X, %-----% %-3NULL0XD:\n", xhard4, CHAR_MIN);
	function("a%.--...31X, %*.12X:>\n", 0, 20, xhard5);
	function("a%6....5X, %18.......15X:%X%XO\n", CHAR_MIN, CHAR_MAX);
	function("%..----.10*..X",-41, 42);
	function("a%6...-5X, %3.6----5X:O\n", xhard3, xhard4);
	function("b%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%X%XD:\n", xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3, xhard4, CHAR_MIN, xhard2, xhard4, xhard5, xhard3);
	function("a%D%D%D%D%%31X, %*%%%X:>\n", INT_MIN, 20, xhard5);
	function("a%0.00000000.5X, %12.63X:O\n", CHAR_MIN, CHAR_MAX);
	function("89417891\n");					//  _   __  _   __
	function("961491\n");					// (_) / / (_) / /
	function("-1518\n");					//    / /     / / 
	function("+15\n");						//   / /     / /  
	function("0\n", xhard1);				//  / / _   / / _ 
	function("%%\n");						// /_/ (_) /_/ (_)
	function("%%\n");
	function("%%\n");
	function("%%\n");
	function("%% Hi i am\n");
	function("%% Youssef\n", xhard2);
	function("%% a 0123456a\n", xhard3);
	function("%% Hi !\n", xhard4);
	function("aaaaa %% aaaaaaa\n", xhard5);
	function("%%\n", xhard1);
	function("%16%\n", xhard2);
	function("%32%\n", xhard3);
	function("%56%\n", xhard4);
	function("%1%\n", xhard5);
	function("%% %%\n", xhard1, 1659);
	function("%% %%\n", xhard2, -1825);
	function("%% %%\n", xhard3, -165);
	function("%% %%\n", xhard4, 165);
	function("%% %%\n", xhard5, 75);
	function("%10%, %%\n", xhard1, xhard2);
	function("%0%, %%245\n", xhard2, xhard3);
	function("%12%, %4%254\n", xhard3, xhard4);
	function("%%, %25%254\n", xhard4, xhard5);
	function("%1%, 245%2%254\n", xhard5, xhard5);
	function("%2%254, 254%44%\n", xhard5, xhard5);  
	function("%*d\n", 16, dhard1);
	function("%5% %*i %%%%T\n", 0, CHAR_MAX);
	function("%17% %*d\n", 10, dhard3);
	function("%*i %015%\n", -12, INT_MAX);
	function("%X %%%%%%%%%%%%%%% %*x\n", dhard2, 12, dhard4);
	function("%5X %%%%%%\n", dhard2); 
	function("%-13p %%\n", INT_MIN); 
	function("%-32x %84%\n", dhard4);
	function("%17% %32u\n", dhard5);
	function("%*X %17%\n", 15,dhard1);
	function("%1% %*d Youssef\n", -65,dhard2);
	function("%*i %117% a 0123456a\n", -0, INT_MAX);
	function("%17% %*p  %17%Hi !\n", 62,dhard4);
	function("%14%aaaaa %*u aaaaaaa\n", 0, INT_MAX);
	function("%*x 	l'err%*%eur !\n", -0,dhard1, 12);
	function("%16X\n", dhard2);
	function("%7% %32u %42%\n", INT_MIN);
	function("%1%%7%%0d\n", dhard4);
	function("%16p%%\n", dhard5);
	function("%32X %1%%12x\n", INT_MAX, dhard4);
	function("t%*i %1%%*i\n", -32, INT_MIN, 49, CHAR_MAX);
	function("o%*% %12x %*X\n", -0, dhard5, 20, dhard2);
	function("t%-0d%17% %*u\n", dhard1, -20, INT_MAX, dhard3, dhard3);
	function("o%*X %1%%-20X\n", 0, dhard1, dhard3, dhard3, dhard3);
	function("!%7%%10X, %%%*x\n", CHAR_MIN, 60, dhard2, dhard3, dhard3);
	function("%%b%-12x, %-20i:ICI\n", INT_MAX, dhard3, dhard3, dhard3);
	function("a%65d, %17%%X:O\n", dhard3, dhard4);
	function("b%98i, %1%%-30xD:\n", dhard4, CHAR_MIN, CHAR_MIN, CHAR_MIN);
	function("a%31X%19%, %12%:>\n", INT_MIN, 20, dhard5, dhard5);
	function("%X %%%%%%%45%%%%%%%% %*x\n", dhard2, 12, dhard4);
	function("%16X\n", dhard2);
	function("%7% %32u %42%\n", INT_MIN);
	function("%1%sdfg%sdfg7%sdfgsdfg%0d\n", shard5 , shard3, dhard4);
	function("%sfg.16p.sdfg.9sdf5%sdfg3.662--0-ds-fgdf.0.0---dsfg1%\n", shard5 , shard3);
	function("%32X %1%..00-.%12x\n", INT_MAX, dhard4);
	function("t%*i %1%%sdfg3.662--0-ds-fgdf.0.0---ds%*i\n", -32, 13, shard3, 0, 49, CHAR_MAX);
	function("o%*% %12x %*X\n", -0, dhard5, 20, dhard2);
	function("t%-0d%sdfg3.662--0-ds-fgdf.0.0---ds%17% %*u\n", dhard1, shard4, -20, INT_MAX);
	function("o%sdfg3.662--0-ds-fgdf.0.0---ds%*X %%sdfg3.662--0-ds-fgdf.0.0---ds1%%-20X\n",shard5, 0, dhard1, dhard3);
	function("!%7%%1%sdfg3.662--0-ds-fgdf.0.0---ds0X, %%%*x\n", -0, CHAR_MAX, dhard2);
	function("%%b%sdfg3.662--0-ds-fgdf.0.0---ds%-12x, %-20i:D\n", shard2, INT_MAX, dhard3);
	function("a%65d, %1%sdfg3.662--0-ds-fgdf.0.0---ds7%%X:O\n", dhard3, dhard4);
	function("b%98i%sdfg3.662--0-ds-fgdf.0.0---ds, %1%%-30xD:\n", dhard4, shard5, CHAR_MIN);
	function("a%31X%%sdfg3.662--0-ds-fgdf.0.0---ds19%, %12%:>\n", INT_MIN, shard1, 20, dhard5, dhard5, dhard5, dhard5);
	function("%X %%%%%%%45%sdfg3.662--0-ds-fgdf.0.0---ds%%%%%%%% %*x\n", dhard2, 12, dhard4);
	function("89417891\n");						//  _   __  __  __ _______   __
	function("961491\n");						// (_) / / |  \/  |_   _\ \ / /
	function("-1518\n");						//    / /  | \  / | | |  \ V / 
	function("+15\n");							//   / /   | |\/| | | |   > <  
	function("0\n", xhard1);					//  / / _  | |  | |_| |_ / . \ 
	function("%% %c\n", chard1);				// /_/ (_) |_|  |_|_____/_/ \_;
	function("%% %c %s\n", chard2, shard3);
	function("%% %s\n", shard2);
	function("%% %s\n", shard1);
	function("%% %d Hi i am\n", dhard1);
	function("%d %d%sYoussef\n", dhard2, dhard3);
	function("%d %d%ca 0123456a\n", dhard3, dhard5, chard3);
	function("%d %c %cHi !\n", dhard4, chard4, chard5);
	function("aaaaa %d %s aaaaaaa\n", dhard5, shard4);
	function("%15d %s\n", dhard1, shard5);
	function("%16% %s %d\n", shard2, dhard5);
	function("%32% %5s\n", shard3);
	function("%56% %c\n", chard4);
	function("%15% %15d %16s\n", dhard5, shard2);
	function("%% %% %dd %c\n", dhard1, 39);
	function("%% %% %d\n", xhard2, -1825);
	function("%% %0% %d %161% %65s\n", dhard3, shard3);
	function("%% %d%c%s%p\n", dhard4, chard5, shard2, phard2);
	function("%% %p%u%x%X\n", phard5, dhard5, xhard1, xhard5);
	function("%10%, %%\n", xhard1, xhard2);
	function("%11% %14d %6p %51s %x, %25%245\n", dhard5, phard3, shard4, xhard5);
	function("%1% %14d %6p %51s753 %x, %245%2%s\n", dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%12% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %25%2%s\n", dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%2% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %2%25%s%16s\n", dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("qqq%12% qqqq%14d753 %6psdfs %51s%%fsdf %6x, %25%2%s\n", dhard5, phard3, shard4, xhard5, shard2);
	function("%-----00006.06s", shard1, shard2);
	function("%-1.s %189% %15.2d", "\0",dhard5, phard3, shard4, xhard5);
	function("%#0-8.5x %0----1.5d %6p %51s753 %x, %245%245%-----00006.06s%s\n",xhard1, dhard5, phard3, shard4, xhard5, shard4, shard2);
	function("%-10.200s, %.1d %45.4p %2.43s %x %s", "Une phrase \0avec des backslash zero au milieu\0\0", dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%172% %0.2s qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%-----00006.06s%16s\n", NULL, dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("\0\0%10%, %62%\0\0\n\0\0", xhard1, xhard2);
	function("%118% \0%%%%100%00.1000d %6p %51s %x, %25%245\n", dhard5, phard3, shard4, xhard5);
	function("%12% %0----1.5d\0 %6p %51s753 %x, %25%245%s\n", dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%12% qqqq\0\0\0\0\0%0000.000d753 %6psdfs %51s%%fsdf\0 %6x, %245%245%-----00006.06s\n", dhard5, phard3, shard4, xhard5, shard2);
	function("\0q%2% qqqq%14d753 \0\0%6psdfs %51s%%fsdf %6x, \0%245%245%s%16s\n", dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("%0.2s %s %22.22s, %3x, %32x%0----1.5d, 42", NULL, NULL , NULL, xhard1, xhard2, 42);
	function("%#0-8.5x %0000.000d %-------5.2d%6p %51s %x, %245%245\n", xhard4, dhard5, dhard3, phard3, shard4, xhard5);
	function("%#-7X %14d %6p %51s753 %x, %245%245%-----00006.06s\n",  INT_MAX, dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%#0-8.5x qqqq%0000.000d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", xhard3, dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%1% qqqq%0----1.5d753 %6psdfs %51s%%fsdf %6x, %245%245%-----00006.06s%16s\n", dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("%10%, %%\n", xhard1, xhard2);
	function("%#-7X %0000.000d %6p %51s %x, %245%245\n", xhard3, dhard5, phard3, shard4, xhard5);
	function("%80.333d %%%%100%00.1000d %6p %51s753 %x, %245%245%s\n", -847365164, dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%#0-8.5x qqqq%0000.000d753 %6psdfs %51s%%fsdf %6x, %245%245%-----00006.06s\n", xhard5, dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%#-7X qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%-10.200s%16s\n", xhard3, dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("%10%, %%\n", xhard1, xhard2);
	function("%80.333d %0----1.5d %6p %51s %x, %245%245\n", -847365164, dhard5, phard3, shard4, xhard5);
	function("%#-7X %14d %6p %51s753 %x, %245%245%s\n", INT_MAX, dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%#0-8.5x qqqq%%%%100%00.1000d753 %6psdfs %51s%%fsdf %6x, %245%245%-10.200s\n", xhard3,dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%80.333d qqqq%0----1.5d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n", -847365164,dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("%10%, %%\n", xhard1, xhard2);
	function("%12% %14d %6p %51s %x, %245%245\n", dhard5, phard3, shard4, xhard5);
	function("%80.333d %0----1.5d %6p %51s753 %x, %245%245%-10.200s\n", -847365164, dhard5, phard3, shard4, xhard5, shard4);
	function("qqq%112% qqqq%%%%10%00.1000d753 %6psdfs %51s%%fsdf %6x, %245%245%s\n", dhard5, phard3, shard4, xhard5, shard2);
	function("qqq%80.333d qqqq%14d753 %6psdfs %51s%%fsdf %6x, %245%245%s%16s\n",  -847365164, dhard5, phard3, shard4, xhard5, shard2, shard3);
	function("%##X %-0-1.5s 35%35% %-1.0d %08.4u %0p\n", -1,"Hello there", INT_MAX, LONG_MIN ,NULL, 0);
	function(" --0%0.0i0 0%0.10i*0-- \n", INT_MIN, 0, 21, 1,850);
	function("++X%-152s %0.0s 0%0.p10i0-- %3p\n", "Lorem ipsum ", 0, 21, 1,850,50);
	function("%0.0s%-0.-0s%5-.5s%0.12d%-0.-0d%####x%.p\n", "e", 0, 13, 29, 0);
	function(".%c, %x, %-0.0p %%%%%.%%%....%.*%**%-%-%-%-----%%%\n", 0,0, 0,0,0);
	function("*.*%8.-0-5d*%-7x*%...i*%.2.u#x##X##X#\n", INT_MIN, LONG_MIN, INT_MIN, LONG_MIN, NULL);
	function(" --0*%-0*.-50d*0 %%.%%.%%.%%*.*%%.*.%%% 0*%-0*.-10d*0-- %x\0\0\0\n", -21, CHAR_MAX, 21, CHAR_MIN, INT_MAX);
	function("%*.*d %s \t \r \v \f \r \n",-1,-0, UINT_MAX + 1, "");
	function("1c%2c%3c%4c%5c%6c%7c%8%9%6%3%6%%9c8%6c6%c%c%c\n",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	function("%%%-0s%%%-1.-1s%%.1s%%%.11S%%%.-8s%%%%...S%%S.S.S%.%.S.%S%S% \n",0,0,0,0,0,0,0,0,0,0);
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