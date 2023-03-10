/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:13:55 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/07 12:49:48 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	h = 0;
	while (h < len && haystack[h])
	{
		n = 0;
		while (h < len && needle[n] && haystack[h] && needle[n] == haystack[h])
		{
			++n;
			++h;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[h - n]);
		h = h - n + 1;
	}					
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZI";
 	size_t max = strlen(s2);
	
 	char *i1 = strnstr(s1, s2, max);
 	char *i2 = ft_strnstr(s1, s2, max);

	printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}*/