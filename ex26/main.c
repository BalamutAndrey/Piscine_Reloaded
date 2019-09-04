/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:44:53 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 16:58:01 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int	ft_number_a(char *argc)
{
	int i;

	i = 0;
	while (argc[i] != '\0')
	{
		if (argc[i] == 'f')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%i\n", ft_count_if(argv, ft_number_a));
	}
	return (0);
}
