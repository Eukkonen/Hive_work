#include "ft_strncmp.c"
#include <stdio.h>
int main(void)
{
char *s1 ="Hello";
char *s2 ="Hello";
unsigned int n = 10;

printf("Compared result of s1 and s2:%d\n",ft_strncmp(s1, s2, n));


return (0);


}
