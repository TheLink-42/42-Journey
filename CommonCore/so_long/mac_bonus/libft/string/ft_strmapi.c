/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:49:02 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 14:50:15 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
