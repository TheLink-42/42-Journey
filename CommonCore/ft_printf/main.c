#include "includes/ft_printf.h"

int main()
{
	char *x = "1234";
	int	y = 3;
	printf("%#s\n", x);
	printf("%#o\n", y);
	printf("%#.s\n", x);
	printf("%.s\n", x);
	return (0);
}