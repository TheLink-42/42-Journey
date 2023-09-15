/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:41:51 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/13 12:45:46 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'A') && (*str <= 'Z')))
			result = 0;
		str++;
	}
	return (result);
}
