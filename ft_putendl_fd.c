/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:08:53 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/16 12:34:11 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	fd = open("izas.txt", O_CREAT | O_WRONLY , 0644);
	ft_putendl_fd("hola brrrr", fd);
	ft_putendl_fd("how u doing?", fd);
	return (0);
}*/