/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 04:35:27 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 04:38:34 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int i;

	i = -3;
	while (i < 15)
	{
		printf("factorial %i = %i\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}
