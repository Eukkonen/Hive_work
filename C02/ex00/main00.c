#include <string.h>
#include <stdio.h>
#include "ft_strcpy.c"
int	main(char){

	char src[] = "Hello";
	char dest[5];

	ft_strcpy(dest, src);
	printf("String: %s\n ",dest);
	return 0;
}
