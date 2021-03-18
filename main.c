/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 05:25:34 by levensta          #+#    #+#             */
/*   Updated: 2021/03/18 23:34:15 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char const *str);
char	*ft_strcpy(char *dst, char const *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, void const *buff, size_t nbyte);
ssize_t	ft_read(int fd, void *buff, size_t nbyte);
char	*ft_strdup(const char *s1);

int main()
{
	int ft_n;
	int n;
	
	ft_n = ft_strlen("123456789");
	n = strlen("123456789");
	printf("\nft_strlen: %d\n   strlen: %d\n\n", ft_n, n);
	
	char	*dst = malloc(10 * sizeof(char));
	char	*src = "123456789";
	
	printf("dst: |%s|\nsrc: |%s|\n", dst, src);
	printf("ft_strcpy: |%s|\n", ft_strcpy(dst, src));
	printf("   strcpy: |%s|\n\n", strcpy(dst, src));
	
	printf("ft_strcmp: %d\n", ft_strcmp("0123", "123"));
	printf("   strcmp: %d\n", strcmp("0123", "123"));
	printf("ft_strcmp: %d\n", ft_strcmp("\xfe", "\xfe\xff"));
	printf("   strcmp: %d\n", strcmp("\xfe", "\xfe\xff"));
	printf("ft_strcmp: %d\n", ft_strcmp("love21", "love21"));
	printf("   strcmp: %d\n\n", strcmp("love21", "love21"));

	// int n = write(1, "123\n", 4);
	// printf("%d\n", n);
	// n = ft_write(1, "123\n", 4);
	// printf("%d\n", n);

	// char *buff = malloc(10);
	// int n = ft_read(1, buff, 10);
	// printf("%d\n", n);
	// return (0);
	
	// char *s = ft_strdup("hello");
	// printf("|%s|\n", s);
}

// nasm -f macho64
// gccw main.c *.o