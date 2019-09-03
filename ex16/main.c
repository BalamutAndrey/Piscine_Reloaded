/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 06:06:46 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 06:21:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "This is a text.";

	printf("15 = %i\n", ft_strlen(&str[0]));
	printf("19 = %i\n", ft_strlen("This is a text too!"));
	return (0);
}
