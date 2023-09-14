#include "ft_printf.h"

int main()
{
	int x;
	int y;

	char	*a;

	a ="patata";

	x = ft_printf("%s esto\n", a);
	y = printf("%s esto\n", a);
	printf("%d, %d\n", x, y);
}