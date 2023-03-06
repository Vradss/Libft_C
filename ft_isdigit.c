/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:39:06 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/02 12:49:52 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Determinar si un caracter es un digito numérico 
//#include<ctype.h>
//#include<stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
    int c = '9';
    if(ft_isdigit(c))
        printf("Es un digito numérico\n");
    else
        printf("No es un digito numérico");

    return(0);
}*/