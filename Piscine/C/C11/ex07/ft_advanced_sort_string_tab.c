/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:24:30 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/28 19:40:27 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	**start;
	char	**next;

	i = tab_len(tab);
	start = tab;
	while (i > 1)
	{
		next = start + 1;
		if ((*cmp)(*start, *next) > 0)
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
int custom_strcmp(char *s1, char *s2)
{
    return strcmp(s1, s2);
}

int main()
{
    char *strings[] = {"pple", "zanana", "oherry", "date", "fig", NULL};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    printf("Original string tab:\n");
    for (int i = 0; i < num_strings; i++)
    {
        printf("%s\n", strings[i]);
    }

    ft_advanced_sort_string_tab(strings, custom_strcmp);

    printf("\nSorted string tab:\n");
    for (int i = 0; i < num_strings; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}*/
