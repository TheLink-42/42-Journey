/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:58:24 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 11:40:41 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			down++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			up++;
		i++;
	}
	if (up == i || down == i)
		return (1);
	return (0);
}
