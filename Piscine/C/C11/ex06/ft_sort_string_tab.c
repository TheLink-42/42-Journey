/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:24:30 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/28 19:40:00 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	char	*aux1;
	char	*aux2;

	aux1 = s1;
	aux2 = s2;
	while (*aux1 && *aux2 && *aux1 == *aux2)
	{
		aux1++;
		aux2++;
	}
	return (*aux1 - *aux2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*buff;

	buff = *s1;
	*s1 = *s2;
	*s2 = buff;
}

int	tab_len(char **tab)
{
	int		len;
	char	**aux;

	len = 0;
	aux = tab;
	while (aux[len])
		len++;
	return (len);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	**start;
	char	**next;

	i = tab_len(tab);
	start = tab;
	while (i > 1)
	{
		next = start + 1;
		if (ft_strcmp(*start, *next) > 0)
		{
			ft_swap(start, next);
			if (start != tab)
			{
				start--;
				i++;
			}
		}
		else
		{
			start++;
			i--;
		}
	}
}
/*
int main() {
    char *strings[] = {"banana", "apple", "orange", "grape", "kiwi", NULL};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    ft_sort_string_tab(strings);

    printf("Sorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}*/
