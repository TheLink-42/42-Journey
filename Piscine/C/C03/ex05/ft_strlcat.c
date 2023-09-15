/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:52:58 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/15 17:04:21 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*dest != '\0' && size > 0)
	{
		dest++;
		len++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		len++;
	}
	if (size >= 1)
		*dest = '\0';
	while (*src)
	{
		src++;
		len++;
	}
	return (len);
}
