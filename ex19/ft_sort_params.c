/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:28:59 by eboris            #+#    #+#             */
/*   Updated: 2019/09/03 20:34:30 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

void	ft_print_param(char *param)
{
	ft_putstr(param);
	ft_putchar('\n');
	param[0] = '\0';
}

void	ft_sort_param(int argc, char **argv)
{
	int f;
	int n;
	int m;

	f = 1;
	while (f != 0)
	{
		f = 0;
		n = 0;
		while (++n < argc)
		{
			if (argv[n][0] != '\0')
			{
				m = 0;
				f = n;
				while (++m < argc)
					if (argv[m][0] != '\0')
						if (ft_strcmp(argv[f], argv[m]) > 0)
							f = m;
			}
		}
		if (f != 0)
			ft_print_param(argv[f]);
	}
}

int		main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	ft_sort_param(argc, argv);
	return (0);
}
