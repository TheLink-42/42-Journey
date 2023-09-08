/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:58:24 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/08 02:58:24 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size > 0)
	{
		while (i < size && dst[i])
			i++;
		j = 0;
		while (src[j] && i + j < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i + j < size)
			dst[i + j] = '\0';
	}
	while (src[j])
		j++;
	return (i + j);
}
