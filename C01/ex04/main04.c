
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main() {
    int a = 42;
    int b = 5;

    printf("Before: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After: a = %d (div), b = %d (mod)\n", a, b);

    return 0;
}
