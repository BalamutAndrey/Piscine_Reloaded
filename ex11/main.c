/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 04:15:50 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 04:20:11 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 8;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%i / %i = %i (%i)\n", a, b, div, mod);
	a = 13;
	b = 4;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%i / %i = %i (%i)\n", a, b, div, mod);
	return (0);
}
