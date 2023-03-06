/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:02:55 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/04 16:45:01 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main()
{
	int c = '%';
	if(ft_isalpha(c))
		printf("Es una letra \n");
	else if (ft_isdigit(c))
		printf("Es un código numérico\n");
	else
		printf("No es ni una letra ni un código numérico\n");
	return(0);
}*/