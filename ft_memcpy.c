/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:22:31 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/04 13:04:36 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char source[] = "Hola Mundo";
	char destination [10];

	ft_memcpy(destination, source, 6);
	destination[8] = '\0';

	printf("La cadena de origen es: %s\n", source);
	printf("La cadena de destino es : %s\n", destination);
}*/