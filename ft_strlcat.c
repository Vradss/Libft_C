/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 20:21:21 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/16 12:08:21 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (src_len += size);
	else
		src_len += dest_len;
	while (src[i] != '\0' && dest_len < size - 1 && dest != src)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void) {
    char dest[] = "vradis";
	char src[] = "1234guido";

	printf("%zu", ft_strlcat(dest, src , 50));
    
    return 0;
}*/