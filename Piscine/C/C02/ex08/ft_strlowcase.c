/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:24:14 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/13 13:30:09 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if ((*buffer >= 'A') && (*buffer <= 'Z'))
			*buffer = *buffer + 32;
		buffer++;
	}
	return (str);
}
