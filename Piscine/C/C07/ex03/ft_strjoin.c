/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:03:21 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/31 04:13:12 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*s1;
	char	*s2;

	s1 = dest;
	s2 = src;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (s1);
}

int	ft_strlen(char *str)
{
	char	*aux;
	int		len;

	aux = str;
	len = 0;
	while (*aux)
	{
		len++;
		aux++;
	}
	return (len);
}

int	find_len(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = -1;
	len = size_sep * -1;
	while (++i < size)
		len += size_sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	if (size <= 0)
	{
		res = (char *)malloc(1);
		*res = '\0';
		return (res);
	}
	len = find_len(size, strs, ft_strlen(sep));
	i = -1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (++i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			res = ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - len);
}
/*
int main() {
    // Sample array of strings
    char *strs[] = {"Hello", "world", "from", "the", "main", "function"};
    int size = sizeof(strs) / sizeof(strs[0]);
    char *sep = "-";

    // Join the strings with the separator
    char *result = ft_strjoin(size, strs, sep);

    if (result) {
        printf("Joined string: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
