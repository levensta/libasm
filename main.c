/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 05:25:34 by levensta          #+#    #+#             */
/*   Updated: 2021/03/17 23:43:20 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
// int		ft_strlen(char const *str);
// char	*ft_strcpy(char *dst, char const *src);
// int		ft_strcmp(const char *s1, const char *s2);
// ssize_t	ft_write(int fd, void const *buff, size_t nbyte);
// ssize_t	ft_read(int fd, void *buff, size_t nbyte);
char	*ft_strdup(const char *s1);

int main()
{
	// int n = ft_strlen("123456789");
	// printf("%d\n", n);
	
	// char	*dst = malloc(10);
	// char	*src = "123456789";
	// printf("|%s|\n", strcpy(dst, src));
	// printf("|%s|\n", dst);
	// printf("|%s|\n", src);
	// printf("==========\n");
	// printf("|%s|\n", ft_strcpy(dst, src));
	// printf("|%s|\n", dst);
	// printf("|%s|\n", src);
	
	// printf("%d\n", strcmp("0123", "123"));
	// printf("%d\n", ft_strcmp("0123", "123"));

	// int n = write(1, "123\n", 4);
	// printf("%d\n", n);
	// n = ft_write(1, "123\n", 4);
	// printf("%d\n", n);

	// char *buff = malloc(10);
	// int n = ft_read(1, buff, 10);
	// printf("%d\n", n);
	// return (0);
	
	char *s = ft_strdup("hello");
	printf("|%s|\n", s);
}

// nasm -f macho64
// gccw main.c *.o