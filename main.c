/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 05:25:34 by levensta          #+#    #+#             */
/*   Updated: 2021/03/14 06:41:18 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char const *str);

int main()
{
	int n = ft_strlen("123456789");
	printf("%d\n", n);
	return (0);
}

// nasm -f macho64
// gccw main.c *.o