/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 04:35:27 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 04:48:07 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i;

	i = -3;
	while (i < 15)
	{
		printf("factorial %i = %i\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}
