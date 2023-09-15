/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:55:49 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/16 18:30:10 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
	{
		write (1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else
		write (1, &(char){nb + '0'}, 1);
}
