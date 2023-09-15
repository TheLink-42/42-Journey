/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:11:59 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/13 13:14:43 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	resultado;

	resultado = 1;
	while (*str != '\0')
	{
		if (!((*str >= 32) && (*str <= 126)))
			resultado = 0;
		str++;
	}
	return (resultado);
}
