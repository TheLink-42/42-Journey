#include "ft_printf.h"
#define INT_MIN -2147483648


int main()
{
	int	x;
	int	y;
	x = ft_printf(" %p \n", 16);
	y = printf("%p", 0);
	printf("%d, %d\n", x, y);
}
