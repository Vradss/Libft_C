/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:41:21 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/02 13:11:36 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Determinar si es un caracter del alfabeto min o mayus
//#include<stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
    char c;
    printf("Introduce un caracter: \n");
    scanf("%c", &c);
    if(ft_isalpha(c))
        printf("El caracter %c es una letra\n", c);
    else
        printf("El caracter %c no es una letra\n", c);

    return(0);
}*/