/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:58:48 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/19 10:43:13 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int main()
{
char *s1 ="hel";
char *s2 ="hello";


int result1 = ft_strcmp(s1, s2);
printf("Compared result of s1 and s2:%d\n", result1);



return (0);


}
