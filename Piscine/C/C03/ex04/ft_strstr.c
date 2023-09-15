/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:21:33 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/17 09:38:30 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;
	char	*result;

	result = 0;
	if (!*to_find)
		result = str;
	while (*str && !result)
	{
		haystack = str;
		needle = to_find;
		while (*needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle && *(haystack - 1) == *(needle - 1))
			result = str;
		str++;
	}
	return (result);
}
