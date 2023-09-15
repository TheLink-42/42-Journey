/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:06:44 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 12:02:26 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_error(char *name, char *msg)
{
	write (2, "ft_tail: ", 9);
	write (2, basename(name), ft_strlen(name));
	write (2, ": ", 2);
	while (*msg)
	{
		write (2, msg, 1);
		msg++;
	}
}

int	count_lines(char *name, int no_lines)
{
	char	buffer;
	int		fd;
	int		i;

	if (basename(name)[0] == '/')
		ft_error(name, ": Is a directoy");
	else
	{
		fd = open(name, O_RDWR);
		if (fd < 0)
			ft_error(name, strerror(errno));
		else
		{
			i = 0;
			while (read(fd, &buffer, 1))
				if (buffer == '\n' || no_lines)
					i++;
			return (i);
		}
	}
	return (-1);
}

void	read_file(char *name, int m, int no_lines)
{
	char	buffer;
	int		fd;
	int		i;

	if (m > 0)
	{
		fd = open(name, O_RDWR);
		if (fd < 0)
			ft_error(name, strerror(errno));
		else
		{
			i = 0;
			while (read(fd, &buffer, 1))
			{
				if (i >= m)
					write (1, &buffer, 1);
				if (buffer == '\n' || no_lines)
					i++;
			}
		}
		close(fd);
	}
}

int	ft_atoi(char *str)
{
	int		res;
	char	*aux;
	int		sig;

	sig = 1;
	aux = str;
	res = 0;
	while (*aux == ' ' || (*aux >= 9 && *aux <= 13))
		aux++;
	if (*aux == '-')
	{
		sig = -sig;
		aux++;
	}
	while (*aux >= '0' && *aux <= '9')
	{
		res = (res * 10) + *aux - 48;
		aux++;
	}
	return (res * sig);
}
