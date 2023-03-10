/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:41:08 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/06 12:45:03 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
#include<stdio.h>
int main(void)
{
	char	c = 'A';
	printf("%c\n", ft_tolower(c)); // Imprime 'A'
	return (0);
}*/