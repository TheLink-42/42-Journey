/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:27 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/11 13:00:27 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr_fd(void *ptr, int out)
{
	char	address_str[20];
	size_t	address;
	size_t	i;
	int	nibble;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", out);
		return ;
	}
	address = (size_t)ptr;
	i = 0;
	while (i++ < sizeof(void *) * 2)
	{
		nibble = (address >> (4 * (sizeof(void *) * 2 - i))) & 0xf;
		if (nibble < 10)
			address_str[i - 1] = '0' + nibble;
		else
			address_str[i - 1] = 'a' + nibble - 10;
	}
	address_str[i] = '\0';
	i = 0;
	while (address_str[i] == 48)
		i++;
	ft_putstr_fd("0x", out);
	ft_putstr_fd(&address_str[i], out);
}
