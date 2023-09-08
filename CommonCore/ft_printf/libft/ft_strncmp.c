/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:14:54 by marvin            #+#    #+#             */
/*   Updated: 2023/09/05 19:14:54 by marvin           ###   ########.fr       */
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
