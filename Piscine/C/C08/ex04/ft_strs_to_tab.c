/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:58:42 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/24 16:44:11 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	res = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		res[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		ft_strcpy(res[i].str, av[i]);
		ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[i].str = NULL;
	return (res);
}
/* int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1;
    }

    struct s_stock_str *stock_array = ft_strs_to_tab(argc - 1, argv + 1);

    if (!stock_array)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int i = 0;
    while (stock_array[i].str != NULL)
    {
        printf("String: %s\n", stock_array[i].str);
        printf("Size: %d\n", stock_array[i].size);
        printf("Copy: %s\n", stock_array[i].copy);
        i++;
    }

    // Free allocated memory
    i = 0;
    while (stock_array[i].str != NULL)
    {
        free(stock_array[i].str);
        free(stock_array[i].copy);
        i++;
    }
    free(stock_array);

    return 0;
}*/
