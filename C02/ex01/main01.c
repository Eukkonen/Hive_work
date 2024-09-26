#include <string.h>
#include <stdio.h>
#include "ft_strncpy.c"
int main(char) {

	char	src[] = "morjesta morjesta!";
	char	dest[20];
	unsigned int n = 5;

	ft_strncpy(dest, src, n);
	dest[n] = '\0';

	printf("String: %s\n", dest);
	return 0;
}
