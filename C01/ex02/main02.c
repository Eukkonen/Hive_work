#include "ft_swap.c"
#include <stdio.h>

int	main(void)
{
	int	x = 5;
	int	y = 10;

	printf("Before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);

	return (0);
}
