/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:17:39 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/13 13:27:47 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if ((*buffer >= 'a') && (*buffer <= 'z'))
			*buffer = *buffer - 32;
		buffer++;
	}
	return (str);
}
