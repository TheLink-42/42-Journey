/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:10:20 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/20 14:48:21 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libft.h"

static void	ft_revstr(char *str, int size)
{
	char	tmp;
	char	*start;
	char	*end;

	start = str;
	end = str + size;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

static int	num_len(unsigned int n, unsigned int base_len)
{
	int	count;

	count = 1;
	while (n > base_len - 1)
	{
		n /= base_len;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(unsigned int n, char *base)
{
	char			*str;
	unsigned int	length;
	int				base_len;

	base_len = (int)ft_strlen(base);
	str = ft_calloc(num_len(n, base_len) + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[++length] = base[n % base_len];
		n = (n / base_len);
	}
	ft_revstr(str, length);
	return (str);
}
