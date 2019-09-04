/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:33:51 by eboris            #+#    #+#             */
/*   Updated: 2019/09/04 19:56:35 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H
# include <fcntl.h>
# include <unistd.h>

void	read_file(int fd);
void	ft_putchar(char c);
void	ft_putstr_error(char *str);
#endif
