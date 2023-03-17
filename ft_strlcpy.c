/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:35:17 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/12 18:02:46 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (src_len > size - 1)
		return (src_len);
	return (i);
}
/*
#include<stdio.h>

int main()
{
	char src[] = "hola como vas";
	char dest[5];

	printf("%zu\n", ft_strlcpy(dest, src, 12));
	return 0;
}*/