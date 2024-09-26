#include "ft_strncat.c"
#include <stdio.h>
int main()

{
	unsigned int nb = 20;
	char src[] ="notmuch";
	char dest[50] ="wadap";

	printf("Combined exampe:%s\n", ft_strncat(dest, src, nb));

return (0);


}
