/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 05:55:24 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 06:01:24 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int i;

	i = 500;
	printf("sqrt(%i) = %i (%i)\n", i * i, ft_sqrt(i * i), i);
	i = i + 13;
	printf("sqrt(%i) = %i (%i)\n", i * i, ft_sqrt(i * i), i);
	i = i + 1823;
	printf("sqrt(%i) = %i (%i)\n", i * i, ft_sqrt(i * i), i);
	i = i + 4354;
	printf("sqrt(%i) = %i (%i)\n", i * i, ft_sqrt(i * i), i);
	i = i + 26434;
	printf("sqrt(%i) = %i (%i)\n", i * i, ft_sqrt(i * i), i);
	return (0);
}
