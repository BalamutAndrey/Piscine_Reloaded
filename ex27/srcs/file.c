/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:07:08 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 20:02:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	open_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("Cannot open file.\n");
	}
	else
	{
		read_file(fd);
	}
}

void	read_file(int fd)
{
	int		r;
	char	c;

	while ((r = read(fd, &c, 1)) > 0)
	{
		ft_putchar(c);
	}
	close(fd);
}
