/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:16:14 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/03 11:53:51 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cuenta la cantidad de caracteres de un string 

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "Hola vradis como te llamas gaaaa";
	size_t len = ft_strlen(str);
	printf("son %zu\n caracteres", len);
	return 0;
}*/