/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:18:47 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/14 17:32:20 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*pointer;

	pointer = dest;
	while (*pointer != '\0')
		pointer++;
	while (*src != '\0')
	{
		*pointer = *src;
		pointer++;
		src++;
	}
	*pointer = '\0';
	return (dest);
}
