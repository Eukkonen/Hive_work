/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:54:07 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 17:12:17 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;
	int	sep_len;
	int	total_len;

	i = 0;
	c = 0;
	sep_len = 0;
	total_len = 0;
	while (sep[sep_len] != '\0')
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			total_len++, j++;
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	s = (char *)malloc(total_len + 1);
	if (!s)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}


int main ()
{
char	*strs[] = {"apple", "banana", "cherry"};
char *sep = "--";
int size = 3;

char *result = ft_strjoin(size, strs, sep);
printf("joined: %s\n", result);
	free(result);
	return (0);
}

