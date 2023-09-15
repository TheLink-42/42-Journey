/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:22:47 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/30 10:56:26 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!result)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			result[i] = min + i;
		return (result);
	}
}
