/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:54:27 by jimmy             #+#    #+#             */
/*   Updated: 2023/09/21 16:08:06 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/push_swap.h"

int	check_args(int argc, char **argv)
{
	if (argc < 2 || check_num(argv))
		return (-1);
	return (0);
}

int	check_num(char **argv)
{
	int	i;
	int	c;
	int	neg;

	i = 0;
	neg = 1;
	while (argv[++i])
	{
		j = 0;
		if (argv[i][j] == '-')
		{
			j++;
			neg *= -1;
		}
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (-1);
			j++;
		}
		if(check_int(argv[i], neg))
			return (-1);
	}
	return (0);
}

long	check_int(char *str, int neg)
{
	long	res;
	int		i;

	res = 0;
	i = -1;
	if (neg == -1)
	{
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483648)
			return (-1);
	}
	else
	{
		while (str[++i])
			res = (res * 10) + str[i] - 48;
		if (res > 2147483647)
			return (-1);
	}
	return (0);
}
