/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:00:27 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/25 10:17:02 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d to the Power of 5: %d\n",atoi(argv[1]), ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return 0;
}

