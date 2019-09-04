/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:45:44 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 14:03:12 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	new = (int*)malloc((max - min + 1) * sizeof(int));
	while (i <= (max - min))
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}
