/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:51:25 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 13:19:20 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*
int main()
{
	int max = 10;
	int min = 3;
	int *range;
	int size;
	int i;

	i = 0;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d", range[i]);
		i++;

	}
	printf("\n");
	free (range);
}
*/
