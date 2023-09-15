/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaeza-c <jbaeza-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:33:47 by jbaeza-c          #+#    #+#             */
/*   Updated: 2023/08/29 11:37:01 by jbaeza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	add(int a, int b);
int	sub(int a, int b);
int	mul(int a, int b);
int	div(int a, int b);
int	mod(int a, int b);

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n == -2147483648)
	{
		write (1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-n);
	}
	else
	{
		write (1, &(char){n + '0'}, 1);
	}
}

int	ft_atoi(char *str)
{
	int	res;
	int	sig;

	res = 0;
	sig = 1;
	if (*str)
	{
		while ((*str >= 9 && *str <= 13) || *str == 0)
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sig = -sig;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			res = (res * 10) + *str - 48;
			str++;
		}
	}
	return (res * sig);
}

int	operator(int a, char c, int b)
{
	int	r;
	int	(*operator[5])(int, int);

	operator[0] = add;
	operator[1] = sub;
	operator[2] = mul;
	operator[3] = div;
	operator[4] = mod;
	r = 1;
	if (c == '+')
		r = operator[0](a, b);
	else if (c == '-')
		r = operator[1](a, b);
	else if (c == '*')
		r = operator[2](a, b);
	else if (c == '/')
		r = operator[3](a, b);
	else if (c == '%')
		r = operator[4](a, b);
	return (r);
}

void	do_op(char *n, char *c, char *m)
{
	int	i;
	int	a;
	int	b;

	i = 1;
	a = ft_atoi(n);
	b = ft_atoi(m);
	if (!(c[0] == '+' || c[0] == '-' || c[0] == '*'
			|| c[0] == '/' || c[0] == '%'))
		ft_putnbr(0);
	else if (c[0] == '/' && b == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		i *= (operator(a, c[0], b));
		ft_putnbr(i);
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
