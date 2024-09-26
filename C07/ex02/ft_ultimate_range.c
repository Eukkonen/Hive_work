/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:55:04 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 13:20:03 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
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
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d,", range[i]);
		i++;

	}
	printf("\n");
	free (range);
}
*/
