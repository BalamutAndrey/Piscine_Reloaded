/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 06:46:29 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 06:56:25 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("aaa  & aaa  = %i\n", ft_strcmp("aaa", "aaa"));
	printf("aaa  & aab  = %i\n", ft_strcmp("aaa", "aab"));
	printf("aab  & aaa  = %i\n", ft_strcmp("aab", "aaa"));
	printf("aaa  & aaaa = %i\n", ft_strcmp("aaa", "aaaa"));
	printf("aaaa & aaa  = %i\n", ft_strcmp("aaaa", "aaa"));
	printf("aaab & aaa  = %i\n", ft_strcmp("aaab", "aaa"));
	printf("aaaa & bbb  = %i\n", ft_strcmp("aaaa", "bbb"));
	printf("bbbb & sss  = %i\n", ft_strcmp("bbbb", "sss"));
	return (0);
}
