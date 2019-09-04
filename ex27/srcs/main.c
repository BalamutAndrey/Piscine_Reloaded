/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:06:04 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 19:40:48 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_error("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (0);
	}
	else
	{
		open_file(argv[1]);
	}
	return (0);
}
