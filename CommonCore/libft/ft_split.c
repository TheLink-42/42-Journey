/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:57:57 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/09/08 02:57:57 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int			flag;
	int			count;
	const char	*aux;

	aux = str;
	flag = 0;
	count = 0;
	while (*aux)
	{
		if (*aux == c && flag)
			flag = 0;
		if (*aux != c && !flag)
		{
			count++;
			flag++;
		}
		aux++;
	}
	return (count);
}

static int	custom_len(const char *s, char c)
{
	const char	*aux;
	int			len;

	aux = s;
	len = 0;
	while (*aux)
	{
		if (*aux == c)
			return (len);
		len++;
		aux++;
	}
	return (len);
}

static void	custom_cpy(char *dst, const char *src, int len)
{
	int	i;

	i = -1;
	while (++i < len && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
}

char	**ft_split(const char *s, char c)
{
	char		**tab;
	int			i;
	int			j;

	j = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (j + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && j > 0)
	{
		if (!custom_len(s, c))
			s++;
		else
		{
			tab[i++] = (char *)malloc(sizeof(char) * custom_len(s, c) + 1);
			custom_cpy(tab[i - 1], s, custom_len(s, c));
			s = s + custom_len(s, c);
			j--;
		}
	}
	tab[i] = NULL;
	return (tab);
}
