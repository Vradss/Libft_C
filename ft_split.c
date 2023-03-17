/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:12:25 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/13 12:47:35 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char separator)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == separator)
			s++;
		if (s != '\0')
			count++;
		while (*s && *s != separator)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char separator)
{
	char	**strings;
	int		count;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	count = count_words(s, separator);
	strings = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == separator)
			s++;
		j = 0;
		while (s[j] && s[j] != separator)
			j++;
		strings[i] = ft_substr(s, 0, j);
		if (!strings[i])
			return (NULL);
		s += j;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
