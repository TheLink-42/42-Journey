/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:30:07 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/14 17:38:13 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*pointer;
	unsigned int	counter;

	pointer = dest;
	counter = 0;
	while (*pointer != '\0')
		pointer++;
	while (*src != '\0' && counter < nb)
	{
		*pointer = *src;
		pointer++;
		src++;
		counter++;
	}
	*pointer = '\0';
	return (dest);
}
