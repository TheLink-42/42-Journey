/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:31:06 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/18 11:23:11 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	base_len(char *str)
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

int	debug_base(char *str)
{
	int		result;
	int		n;
	char	*inicio;
	char	*next;

	n = base_len(str);
	inicio = str;
	result = 0;
	while (*inicio)
	{
		if (*inicio == '+' || *inicio == '-')
			result = 1;
		next = inicio + 1;
		while (*next)
		{
			if (*inicio == *next)
				result = 1;
			next++;
		}
		inicio++;
	}
	if (n < 2)
		result = 1;
	return (result);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = base_len(base);
	if (debug_base(base) == 0)
	{
		if (nbr > (n - 1))
		{
			ft_putnbr_base(nbr / n, base);
			ft_putnbr_base(nbr % n, base);
		}
		else if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / n, base);
			ft_putnbr_base(-(nbr % n), base);
		}
		else if (nbr < 0)
		{
			write (1, "-", 1);
			ft_putnbr_base(-nbr, base);
		}
		else
			write(1, &base[nbr], 1);
	}
}
