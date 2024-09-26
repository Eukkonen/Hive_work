#include "ft_strstr.c"
#include <stdio.h>

int main(){
char i[] = "ab";
char dest[] = "a ab";
printf("%s", ft_strstr(dest, i));
}
