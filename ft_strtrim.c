/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:51:54 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/14 15:07:26 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *cuts)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s || !cuts)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] && ft_strchr(cuts, s[start]))
		start++;
	while (s[end - 1] && ft_strchr(cuts, s[end - 1]))
		end --;
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy (trim, &s[start], end - start + 1);
	trim [end - start] = '\0';
	return (trim);
}
/*
#include <stdio.h>

int main ()
{
	char string[] = "vradis";
	char cut[] = "is";
	char *trim = ft_strtrim(string,cut);

	printf("Lets trim '%s' in '%s' and the result is : %s", cut, string, trim);
}*/