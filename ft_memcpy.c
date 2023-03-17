/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:22:31 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/12 18:30:30 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest != NULL || src != NULL)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char source[] = "Hola Mundo";
	char destination [] = "12345";

	ft_memcpy(destination, source, 2);

	printf("La cadena de origen es: %s\n", source);
	printf("La cadena de destino es : %s\n", destination);
}*/