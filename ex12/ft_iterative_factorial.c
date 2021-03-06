/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 04:26:04 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 04:51:36 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	else if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
