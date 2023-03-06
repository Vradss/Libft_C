/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:53:48 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/03 13:46:58 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*m;
	size_t			i;

	m = ptr;
	i = 0;
	while (i < n)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[50] = "Vradis";

	// Imprime el contenido de str antes de llamar a ft_memset
	printf("Antes: %s\n", str);

	// Llama a ft_memset para llenar str con el valor 'A'
	ft_memset(str, 'X', 2);

	// Imprime el contenido de str después de llamar a ft_memset
	printf("Después: %s\n", str);

	return (0);
}*/
