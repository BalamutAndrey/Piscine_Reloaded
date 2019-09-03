/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:37:49 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 21:43:41 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_strdup("This is a text message.\n");
	while (new[i] != '\0')
	{
		write(1, &new[i], 1);
		i++;
	}
	return (0);
}
