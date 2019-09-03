/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:17:01 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 21:37:29 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n++;
	new = (char*)malloc((n + 1) * sizeof(char));
	n = 0;
	while (src[n] != '\0')
	{
		new[n] = src[n];
		n++;
	}
	new[n] = '\0';
	return (new);
}
