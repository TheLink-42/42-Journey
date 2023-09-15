/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:56:11 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/22 16:20:48 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;

	left = 0;
	right = nb + 1;
	if (nb <= 0 || nb == 2 || nb == 3)
		return (0);
	if (nb == 1)
		return (1);
	while (left < right - 1)
	{
		mid = (left + right) / 2;
		if (mid == nb / mid)
			right = left;
		else if (mid <= nb / mid)
			left = mid;
		else
			right = mid;
	}
	if (nb % mid == 0)
		return (mid);
	return (0);
}
