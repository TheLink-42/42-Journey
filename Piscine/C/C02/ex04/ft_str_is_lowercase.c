/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:34:47 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/13 12:41:13 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'a') && (*str <= 'z')))
			result = 0;
		str ++;
	}
	return (result);
}
