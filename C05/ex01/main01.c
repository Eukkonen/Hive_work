#include "ft_recursive_factorial.c"
#include <stdio.h>

int main()
{
	printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
	printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
	printf("Factorial of -5: %d\n", ft_recursive_factorial(-5));
	return 0;
}

