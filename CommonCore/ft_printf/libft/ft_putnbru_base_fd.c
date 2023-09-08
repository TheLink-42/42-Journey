/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:03:42 by marvin            #+#    #+#             */
/*   Updated: 2023/09/08 00:03:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbru_base_fd(unsigned int nbr, char *base, int out)
{
	unsigned int	n;

	n = (int)ft_strlen(base);
	if (nbr > (n - 1))
	{
		ft_putnbru_base_fd(nbr / n, base, out);
		ft_putchar_fd(base[nbr % n], out);
	}
	else
		ft_putchar_fd(base[nbr], out);
}
