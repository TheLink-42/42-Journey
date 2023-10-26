/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:53:26 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 13:26:07 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*aux;

	aux = s;
	while (*aux)
	{
		ft_putchar_fd(*aux, fd);
		aux++;
	}
	ft_putchar_fd('\n', fd);
}
