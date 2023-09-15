/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:50:00 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 20:52:14 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c, int n)
{
	write(1 + n, &c, 1);
}

void	ft_putstr(char *str, int is_error)
{
	write(1 + is_error, str, ft_strlen(str) + 1);
}

int	ft_strlen(char *str)
{
	char	*aux;
	int		len;

	len = 0;
	aux = str;
	while (*aux && *aux != '\n')
	{
		aux++;
		len++;
	}
	return (len);
}

int	ft_atoi(char *str, int *res)
{
	int	len;

	len = ft_strlen(str);
	if (len < 4 || len > 13)
		return (ERROR);
	*res = 0;
	while (((*str >= 9 && *str <= 13) || *str == 32) && len > 3)
	{
		len--;
		str++;
	}
	while (*str >= '0' && *str <= '9' && len > 3)
	{	
		if (*res * 10 > 2147483647 - *str - 48)
			return (ERROR);
		*res = (*res * 10) + *str - 48;
		str++;
		len--;
	}
	if (len != 3)
		return (ERROR);
	return (0);
}
