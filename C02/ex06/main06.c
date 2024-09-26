#include <string.h>
#include <stdio.h>
#include "ft_str_is_printable.c"

int main()
{

char test1[] ="\55";
char test2[] ="\45";
printf(" %d\n", ft_str_is_printable(test1));
printf(" %d\n", ft_str_is_printable(test2));
return(0);
}
