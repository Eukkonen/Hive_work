/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:40:21 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/17 11:24:40 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int main(void)
{
char *s1 ="Hello";
char *s2 ="He";
unsigned int n = 3;

printf("Compared result of s1 and s2:%d\n",ft_strncmp(s1, s2, n));


return (0);


}
