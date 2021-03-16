/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 05:25:34 by levensta          #+#    #+#             */
/*   Updated: 2021/03/16 23:07:56 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// int		ft_strlen(char const *str);
// char	*ft_strcpy(char *dst, char const *src);
int		ft_strcmp(const char *s1, const char *s2);

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
	
	// printf("%d\n", strcmp("0123", 0));
	// printf("%d\n", ft_strcmp("0123", 0));
	return (0);
}

// nasm -f macho64
// gccw main.c *.o