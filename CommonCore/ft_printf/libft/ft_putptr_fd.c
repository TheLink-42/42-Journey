/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 00:04:41 by marvin            #+#    #+#             */
/*   Updated: 2023/09/08 00:04:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr_fd(void *ptr, int out)
{
	char	address_str[20];
	size_t	address;
	size_t	i;
	int		nibble;

	address = (size_t)ptr;
	i = 0;
	while (i < sizeof(void *) * 2)
	{
		nibble = (address >> (4 * (sizeof(void *) * 2 - 1 - i))) & 0xf;
		if (nibble < 10)
			address_str[i] = '0' + nibble;
		else
			address_str[i] = 'a' + nibble - 10;
		i++;
	}
	address_str[i] = '\0';
	ft_putstr_fd(address_str, out);
}
