/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:41 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/21 13:31:35 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
#include<stdlib.h>
int	ft_is_prime(int nb);
int	main(int argc, char **argv)
{
	(void)argc;
	printf("Number is prime 1 or not 0 result: %d\n", ft_is_prime(atoi(argv[1])));
}
