/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:11:31 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/10 19:09:02 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strcpy(char *dest, char *src)
{	
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	lens1;
	size_t	lens2;
	int		i;
	int		j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	result = malloc (sizeof(char) * (lens1 + lens2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

/*#include <stdio.h>

int main()
{
	char s1[] = "vradis";
	char s2[] = "florez";
	printf("%s\n", ft_strjoin(s1,s2));
	return (0);
}*/
