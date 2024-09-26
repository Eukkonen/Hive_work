#include "ft_strcmp.c"
#include <stdio.h>
int main()
{
char *s1 ="Hello";
char *s2 ="Hell";


int result1 = ft_strcmp(s1, s2);
printf("Compared result of s1 and s2:%d\n", result1);



return (0);


}

/*
int result2 = ft_strcmp(s1, s3);
printf("Compared result of s1 and s3:%d\n", result2);

char *s3 ="olleH";
*/
