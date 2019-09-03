/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 03:37:49 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 03:43:43 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	write(1, "-1 - is ", 8);
	ft_is_negative(-1);
	write(1, "\n 0 - is ", 9);
	ft_is_negative(0);
	write(1, "\n 1 - is ", 9);
	ft_is_negative(1);
	write(1, "\n", 1);
	return (0);
}
