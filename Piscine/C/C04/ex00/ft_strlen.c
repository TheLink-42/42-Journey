/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:36:41 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/17 18:11:45 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*aux;
	int		len;

	aux = str;
	len = 0;
	while (*aux)
	{
		len++;
		aux++;
	}
	return (len);
}
