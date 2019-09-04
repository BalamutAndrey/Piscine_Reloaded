/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:54:42 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 14:04:34 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i;
	int a;
	int b;
	int	*temp;

	i = 0;
	a = 3;
	b = 11;
	temp = ft_range(a, b);
	if (temp == NULL)
	{
		printf("NULL!!!\n");
		return (0);
	}
	while (i < (b - a + 1))
	{
		printf("%i\n", temp[i]);
		i++;
	}
	return (0);
}
