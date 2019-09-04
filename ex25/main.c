/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:57:21 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 16:28:15 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;
	int mass[10];

	i = 0;
	while (i < 10)
	{
		mass[i] = i + 97;
		i++;
	}
	ft_foreach(mass, 10, ft_putchar);
	return (0);
}
