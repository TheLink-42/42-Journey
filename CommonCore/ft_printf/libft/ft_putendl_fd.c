/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:06:52 by marvin            #+#    #+#             */
/*   Updated: 2023/09/05 19:06:52 by marvin           ###   ########.fr       */
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
