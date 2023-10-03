/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:57:56 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 14:48:03 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	ft_revstr(char *str)
{
	int		size;
	char	tmp;
	char	*start;
	char	*end;

	size = ft_strlen(str);
	start = str;
	end = str + size - 1;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	num_len(int n)
{
	int	count;

	n = ft_abs(n);
	count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*min_int(void)
{
	char	*str;

	str = ft_strdup("-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	if (n == -2147483648)
	{
		str = min_int();
		return (str);
	}
	str = ft_calloc(num_len(n) + 1 + is_neg, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	ft_revstr(str);
	return (str);
}
