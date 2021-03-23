/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 05:25:34 by levensta          #+#    #+#             */
/*   Updated: 2021/03/23 22:04:26 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char const *str);
char	*ft_strcpy(char *dst, char const *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, void const *buff, size_t nbyte);
ssize_t	ft_read(int fd, void *buff, size_t nbyte);
char	*ft_strdup(const char *s1);

char *dwayne_johnson = "                                                               ,                      \n\
                                                               2                                              \n\
                                                                 ,                                            \n\
                              .i2ii,,.;ri2SS252iiS,.;;29Ghs .    .h                                           \n\
                              3;MM@@@###MHh  iHH#@@##@@@@#MMSrr,  5                                           \n\
                               hX53h9G9Gr    : XGh9hhGhG9X3rr    h &ir                                        \n\
                               s                ,  .;siSi;. .   ;,9::3                                        \n\
                               S..     ihi::5&25:X.       ,.,:  S;r,S                                         \n\
                                2          , .       r    ,:    5hS                                           \n\
                                 r:  .S9GiS3h5rS3H2Xr;i.::,, .r3                                              \n\
                                 S  ,    .: rir  .;r ;;r..rr5,Mi                                              \n\
                                   hr                .:33GABM9::,,,                                           \n\
                                    Sr5  :;;,r:2:S2&MM#@#H2sSr;S;S :,hrs.                                     \n\
                                   ih.; :3h3:h#MM##MBG2;S:s;si:ir.i.,sBMHH#99                                 \n\
                              i&9HBhH : ,,. .i;:rXiis5;,. ,:,sii.&#HAB#BHMAAMAhMG9H2:        35h&2            \n\
                      5XGiHB92#HBsHGhH&r: ,.,:s;riSsrsrrsrX&MHM###HMBBAGHMHGhGBM&HG93539&Ahi9&G&BAsSr .;      \n\
              ;i52A5rHMAMGA&HMBBB3AAM#M#M#M####M#@##@@@@@@@#@######MMHH3X5B&3Hhi9AGAMXMA2MAA9i3h,&5h&HG2G&&   \n\
       .; .   92GhHXA25HHA&H#AB&MABBHh#hM#####MBM##@#@@M@@######@##HH&&AB5GM@M#@hBMM#MABA23r5,:Ssri5S,;i3.9B  \n\
 ,             &&G9GA3BAHHMBHBABHBHHHABMMM##M########BBMM@M##MBM##BBMAB33BM&###M#HGHHH25 X9SSrS XS rrX3X,s:,S \n\
                HA#M&M#9MMB&AHHA&AHBBHMABM#BMM##M####M##MBBM##MM#MBBMHH&BB#9M###AH&&i 5::  .X s.5 isr ri.Ss,  \n\
                SBM#MB&#HHB&&HHABHMBHHB#MBM#M#MA#MMM#M##M#M##BBHH5X: A&M3;  AA#BBGXS;;  X:iS  , i9S:rr&s;BSs; \n\
                 #9AGhBMHB&HHHHHHBBMBBHMHBMMHMMHBMMMAAHHBMB#MMB#AhX:iX9&B  r3&MB9XiS ;;ir: ir r,si ; h3  ;..  \n\
             ...rABXBM#BABBMB#BBMMM#MMMMMMG##BBBMBMMM#BM##MMBMMB##BMMMBBMBB#HG@B#2;  rX:X ;,  : ;33,S;.:;AhXXS\n\
       Ss:  ,   rhMGM@&2hG&2A#HBM#29AAAB#B2&&AGAMMM99&A2&M##B52MBBMGXBBBBX3B#M#@BSG,Xs9;. , r :  59ss:;,rr:G;5\n\
 ,,; r          , @#@@MX3Gh2AMMM#M22X2XBBH5222h#MMB2M#MXG#MGXHB5HMBG222X223#@@HM#5s:i2:Xs::2 r . r,iiG; i5G;H2\n\
                  ;M#@93##M2HMBHHB29AAAM#H2AHG2AMB5&M#M2GMXhBHBB33BhXMMM#33#@#HGriS2S2XX3ri2ii2h:X29,535i; : .\n\
                .,.G#@@@@@@@@##@##M#M#M#MM#######HMMM#MH#MMM#MMBMHMMM###@@@@#@:SXi2r  ;Sr5X,:Xs9323: 35iSG;;  \n\
               .  sX@@@@@@@@@@@@@@@#@##@@#@####M##BM#B#MBBABHHHHMHMMB##@@@@HBX hiirsrX9Xi5Si55Xi5S:S;;SS;s2 . \n\
              ;:;5;#MMM###@@@@@@@@@@@@@@@###@##@MBBBM&i,      ,;s&&&&h#@@#@MH ,&i5 :sr;sS2r5s::Ss:;SXrS5Sr.S; \n\
.   . ,::,.,,siX3hGA5.:.,G#@#@@@@@@##BAA3i,  ,                    ,  ..2i;:,i . rXr S25.;:si.55X95sss5s,ir;; s\n\
                                                                         ,.,.;r5, 2  ,.           :Gi.:h,3,& 2\n\
                                            ███─████───██─████─█──█                                            \n\
                                            █───█─────█─█─█──█─█──█                                            \n\
                                            ███─████─█──█─████─████                                            \n\
                                            █───█──█─█──█─█──█─█──█                                            \n\
                                            ███─████─█──█─█──█─█──█                                            \n\
                                                             ,;.           ,r:;is,s .S;.             ;h.,2hi H\n\
                                              ;:.   ,,sr;ihhXi,Srr .,rr;                               . BG;:&\n\
                           :   :.:,;irir        ,;Sr599i,,:                                      .      ::rhAS\n\
            ,..;,,;rsrr;rii5iS:s:           .s;s59S .                                           ..   . r,s,3r2\n\
   .r,.r;;iS5525255SiSs;;,,   .,    ,sS;;ssXB2;,.,.             .               ..    ....:,.:,     ..,:r:s5A&\n\
253X5332S22X5XssSi5S5S322sSr.,;532ii9&M#B3S2SssiSsr,,..,  ,.,,,:...,,:,,.,,,:.::,::,..           ..,:;;SSsA3: ";

int main()
{

	int ft_n;
	int n;

// ft_strlen
	// emprty string
	ft_n = ft_strlen("");
	n = strlen("");
	printf("\nft_strlen: %d\n   strlen: %d\n\n", ft_n, n);

	// very long string
	ft_n = ft_strlen(dwayne_johnson);
	n = strlen(dwayne_johnson);
	printf("\nft_strlen: %d\n   strlen: %d\n\n", ft_n, n);

// ft_strcpy
	char	*dst = malloc(ft_strlen(dwayne_johnson));
	char	*src = dwayne_johnson;
	
	// emprty string
	printf("ft_strcpy: |%s|\n", ft_strcpy(dst, ""));
	printf("   strcpy: |%s|\n\n", strcpy(dst, ""));
	// very long string
	printf("ft_strcpy: |%s|\n", ft_strcpy(dst, src));
	printf("   strcpy: |%s|\n\n", strcpy(dst, src));
	
// ft_strcmp
	printf("ft_strcmp: %d\n", ft_strcmp("0123", "223"));
	printf("   strcmp: %d\n", strcmp("0123", "223"));
	printf("ft_strcmp: %d\n", ft_strcmp("\xfe\xff", "\xfe"));
	printf("   strcmp: %d\n", strcmp("\xfe\xff", "\xfe"));
	printf("ft_strcmp: %d\n", ft_strcmp("love21", "love21"));
	printf("   strcmp: %d\n\n", strcmp("love21", "love21"));
	// 2 empty strings
	printf("2 empty strings:\n");
	printf("ft_strcmp: %d\n", ft_strcmp("", ""));
	printf("   strcmp: %d\n", strcmp("", ""));
	// first empty string
	printf("first empty string:\n");
	printf("ft_strcmp: %d\n", ft_strcmp("", "123"));
	printf("   strcmp: %d\n", strcmp("", "123"));
	// second empty string
	printf("second empty string:\n");
	printf("ft_strcmp: %d\n", ft_strcmp("123", ""));
	printf("   strcmp: %d\n\n", strcmp("123", ""));

// ft_write
	n = ft_write(1, "123\n", 4);
	printf("%d, %d\n", errno, n);
	errno = 0;
	n = write(1, "123\n", 4);
	printf("%d, %d\n", errno, n);
	errno = 0;

	n = ft_write(-1, "123\n", 4);
	printf("%d, %d\n", errno, n);
	errno = 0;
	n = write(-1, "123\n", 4);
	printf("%d, %d\n", errno, n);

	n = ft_write(1, 0, 4);
	printf("%d, %d\n", errno, n);
	errno = 0;
	n = write(1, 0, 4);
	printf("%d, %d\n", errno, n);

	n = ft_write(1, "123\n", -4);
	printf("%d, %d\n", errno, n);
	errno = 0;
	n = write(1, "123\n", -4);
	printf("%d, %d\n", errno, n);
	errno = 0;

// ft_read
	printf("====================\n");
	int fd = open("ft_read.s", O_RDONLY);
	char *buff = calloc(200, 1);
	n = ft_read(fd, buff, 200);
	printf("ft_read: %d, %d\n%s\n", errno, n, buff);
	errno = 0;
	close(fd);
	fd = open("ft_read.s", O_RDONLY);
	free(buff);
	buff = calloc(200, 1);
	n = read(fd, buff, 200);
	printf("   read: %d, %d\n%s\n", errno, n, buff);
	errno = 0;
	close(fd);

	n = ft_read(-1, buff, 200);
	printf("ft_read: %d, %d\n", errno, n);
	errno = 0;
	n = read(-1, buff, 200);
	printf("   read: %d, %d\n", errno, n);
	errno = 0;

	fd = open("ft_read.s", O_RDONLY);
	n = ft_read(fd, 0, 200);
	printf("ft_read: %d, %d\n", errno, n);
	errno = 0;
	close(fd);
	fd = open("ft_read.s", O_RDONLY);
	n = read(fd, 0, 200);
	printf("   read: %d, %d\n", errno, n);
	errno = 0;
	close(fd);

	fd = open("ft_read.s", O_RDONLY);
	n = ft_read(fd, buff, -1);
	printf("ft_read: %d, %d\n", errno, n);
	errno = 0;
	close(fd);
	fd = open("ft_read.s", O_RDONLY);
	n = read(fd, buff, -1);
	printf("   read: %d, %d\n", errno, n);
	errno = 0;
	close(fd);

//ft_strdup
	// long string
	char *s = ft_strdup(dwayne_johnson);
	printf("|%s|\n", s);
	s = strdup(dwayne_johnson);
	printf("|%s|\n\n", s);

	// empty string
	s = ft_strdup("");
	printf("|%s|\n", s);
	s = strdup("");
	printf("|%s|\n", s);

	return (0);
	
}

