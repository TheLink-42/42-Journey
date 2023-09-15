/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:31:00 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/27 23:15:49 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str && *str != '\n')
	{
		if (*str >= 'a' && *str <= 'z')
			len++;
		if (*str >= 'A' && *str <= 'Z')
			len++;
		str++;
	}
	return (len);
}

unsigned int	ft_atoi(char *str)
{
	unsigned int	result;

	result = 0;
	if (*str)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		while (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + *str - 48;
			str++;
		}
	}
	return (result);
}

void	custom_cpy(char *dest, char *src)
{
	while (*src)
	{
		if (*src >= 'a' && *src <= 'z')
		{
			*dest = *src;
			dest++;
		}
		if (*src >= 'A' && *src <= 'Z')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
}
