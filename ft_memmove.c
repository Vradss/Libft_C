/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:35:56 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/12 18:30:06 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = n - 1;
	if (src == NULL && dest == NULL)
		return (NULL);
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char dest[] = "123456789";
	char source[] = "ABCDEFGHIJKL";
	
	printf("Antes de memmove : SRC %s, DEST %s\n", source, dest);

	ft_memmove(dest, source , 2);

	printf("despues de memmove : SRC %s , DEST %s\n", source, dest);

	return 0;
}*/