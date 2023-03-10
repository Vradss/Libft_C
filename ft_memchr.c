/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:07:56 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/06 20:10:40 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	main(void)
{
	char	str[] = "ABACAAAAAAAAAA";
	char	*ptr;
	
	ptr = ft_memchr(str, 'A', ft_strlen(str));
	if (ptr)
		printf("Encontrado: %s\n", ptr);
	else
		printf("No encontrado.\n");

	return (0);
}*/
