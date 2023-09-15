/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:14:18 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/18 11:23:09 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
{
	char	*aux;
	int		len;

	aux = base;
	len = 0;
	while (*aux)
	{
		len++;
		aux++;
	}
	return (len);
}

int	debug_base(char *base)
{
	int		result;
	int		n;
	char	*inicio;
	char	*next;

	n = base_len(base);
	inicio = base;
	result = 0;
	while (*inicio)
	{
		if (*inicio == '+' || *inicio '-')
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

int	ft_atoi_base(char *str, char *base)
{
	int		n;
	int		result;
	char	*aux;
	int		i;

	n = 1;
	result = 0;
	aux = str;
	i = 0;
	if (debug_base(base) == 0)
		return (0);
	while (*aux)
	{
		if (*aux == '-')
		{
			n = -1;
			aux++;
		}
		while (*aux != base[i])
			i++;
		result = (result * base_len(base)) + i;
		aux++;
		i = 0;
	}	
	return (result * n);
}
