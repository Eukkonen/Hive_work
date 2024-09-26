/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:00:36 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/25 09:50:56 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		leng;
	int		i;
	char	*twin;

	i = 0;
	leng = 0;
	while (src[leng] != '\0')
	{
		leng++;
	}
	twin = (char *)malloc((leng + 1) * sizeof(char));
	if (twin == NULL)
	{
		return (NULL);
	}
	while (i <= leng)
	{
		twin[i] = src[i];
		i++;
	}
	return (twin);
}

/*
int main()
{
	char src[] ="Hello world";
	char *twin = ft_strdup(src);

	if (twin == NULL)
	{
		printf("Malloc memory fail\n");
		return 1;
	}

printf("OG: %s\n", src);
printf("Twin: %s\n", twin);

free(twin);
}
*/
