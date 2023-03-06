/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:31:14 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/02 13:11:25 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include  <stdio.h>

int c = 'ex';
int main()
{
	if(ft_isprint(c))
		printf("Es un caracter imprimible");
	else
		printf("No es un caracter imprimible");
	
}*/