#include <stdio.h>
#include "ft_strcapitalize.c"
int main(){

	char str[] = "salut, comment tu Vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}
