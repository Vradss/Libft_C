/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:13:11 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/04 14:32:54 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
	char dest[] = "vradis";
	char source[] = "sabrina";
	
	printf("Antes de memmove : SRC %s, DEST %s\n", source, dest);

	ft_memmove(dest, source , 2);

	printf("despues de memmove : SRC %s , DEST %s\n", source, dest);

	return 0;
}*/