/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:34:36 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/16 13:12:55 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write (fd, &c, 1);
}
/*
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;

	fd = open( "numnew.txt", O_CREAT | O_WRONLY , 0644);
	ft_putnbr_fd(-93749, fd);
	return(0);
}*/