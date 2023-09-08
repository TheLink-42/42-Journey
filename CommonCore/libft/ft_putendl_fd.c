/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:57:39 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/08 02:57:39 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
