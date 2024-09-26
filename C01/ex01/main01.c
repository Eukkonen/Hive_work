#include <unistd.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
	int	i;
	int	*ptr1 = &i;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);
	write(1, &i, 1);
	return (0);
}
