/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:58:47 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/08 02:58:47 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*aux1;
	const char	*aux2;
	size_t		i;

	aux1 = s1;
	aux2 = s2;
	i = 0;
	while (i < n && *aux1 && *aux2)
	{
		if (*aux1 != *aux2)
			return (*aux1 - *aux2);
		aux1++;
		aux2++;
		i++;
	}
	if (i < n)
		return (*aux1 - *aux2);
	return (0);
}
