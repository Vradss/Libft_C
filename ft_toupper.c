/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:22:49 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/06 18:59:20 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include<stdio.h>
int main(void)
{
	char	c = 'C';
	printf("%c\n", ft_toupper(c)); // Imprime 'A'
	return (0);
}*/