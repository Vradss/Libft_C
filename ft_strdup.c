/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:27:29 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/08 13:29:49 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy (ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	*str1 = "Hola vraadss!";
	char	*str2;

	str2 = ft_strdup(str1);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	free(str2);

	return (0);
}*/
