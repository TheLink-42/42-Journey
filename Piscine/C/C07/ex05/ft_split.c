/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:37:11 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 18:01:41 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (*s2 && i < n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}
	*s1 = '\0';
}

int	count_words(char *str, char *sep)
{
	int		i;
	char	*aux;
	int		flag;

	i = 0;
	flag = 0;
	aux = sep;
	while (*str)
	{
		while (*aux)
		{
			if (*str == *aux && !flag)
			{
				i++;
				flag = 1;
			}
			else if (*str != *aux)
				flag = 0;
			aux++;
		}
		aux = sep;
		str++;
	}
	return (i - 1);
}

int	len(char *str, char *sep)
{
	int		len;
	char	*aux;

	len = 0;
	aux = sep;
	while (*str)
	{
		while (*sep)
		{
			if (*str == *sep)
				return (len);
			sep++;
		}
		sep = aux;
		len++;
		str++;
	}
	return (len);
}

char	*find_next_sep(char *str, char *sep)
{
	int	i;

	i = len(str, sep);
	i++;
	return (str + i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*aux;
	int		i;
	int		j;

	j = count_words(str, charset);
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (j + 3));
	if (!tab)
		return (NULL);
	aux = str;
	while (*aux && j > -2)
	{
		if (!len(aux, charset))
			aux++;
		else
		{
			tab[i++] = (char *)malloc(sizeof(char) * (len(aux, charset) + 1));
			ft_strncpy(tab[i - 1], aux, len(aux, charset));
			aux = find_next_sep(aux, charset);
			j--;
		}
	}
	tab[i] = 0;
	return (tab);
}
