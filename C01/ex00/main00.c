
#include "ft_ft.c"
#include <unistd.h>


int	main(void)
{
	int	i;

	ft_ft(&i);
	write (1, &i, 1);
	return (0);
}


