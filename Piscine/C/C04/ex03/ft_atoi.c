/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:44:12 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/17 18:08:36 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	counter;
	int	result;

	counter = 1;
	result = 0;
	if (*str)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				counter = -counter;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + *str - 48;
			str++;
		}
	}
	return (result * counter);
}
