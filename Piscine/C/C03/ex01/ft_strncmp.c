/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:43:05 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/15 19:52:35 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 && *s2 && counter < n && *s1 == *s2)
	{
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
	{
		s1--;
		s2--;
	}
	return (*s1 - *s2);
}
