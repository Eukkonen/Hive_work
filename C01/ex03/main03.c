#include <stdio.h>
#include "ft_div_mod.c"

int main(void) {

	int a = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Division:%d\n", div);
	printf("Modulus:%d\n", mod);

	return (0);
}
