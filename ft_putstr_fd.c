/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:08:36 by vflorez           #+#    #+#             */
/*   Updated: 2023/03/16 11:28:24 by vflorez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;

	fd = open("vradis.txt", O_CREAT | O_WRONLY, 0644);
	ft_putstr_fd("bbcita brrrr\n", fd);
	ft_putstr_fd("GAAAAAAA\n", fd);

	close (fd);
	return (0);
}*/
