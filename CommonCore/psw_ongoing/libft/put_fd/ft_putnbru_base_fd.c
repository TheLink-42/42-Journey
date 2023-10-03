/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:22 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 13:26:43 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

void	ft_putnbru_base_fd(unsigned int nbr, char *base, int fd)
{
	unsigned int	n;

	n = (int)ft_strlen(base);
	if (nbr > (n - 1))
	{
		ft_putnbru_base_fd(nbr / n, base, fd);
		ft_putchar_fd(base[nbr % n], fd);
	}
	else
		ft_putchar_fd(base[nbr], fd);
}
