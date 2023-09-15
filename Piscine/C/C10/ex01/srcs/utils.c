/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:06:44 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 12:02:29 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

void	ft_putchar(char c, int out)
{
	write (out, &c, 1);
}

void	ft_putstr(char *str, int out)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], out);
		i++;
	}
}

int	ft_read(char *file_path)
{
	int		file;
	char	buff[2];

	file = open(file_path, O_RDWR);
	if (file != -1)
	{
		while (read(file, buff, 1) != 0)
			ft_putchar(buff[0], 1);
		close(file);
		return (1);
	}
	else
	{
		close (file);
		return (0);
	}
}

void	zero_args(char **argv)
{
	char	buff;

	while (read(0, &buff, 1) != 0)
	{
		if (!errno)
			ft_putchar(buff, 1);
		else
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}
