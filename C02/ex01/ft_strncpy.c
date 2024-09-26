/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:59:03 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/22 14:36:15 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main(char) {

	char	src[] = "morjesta morjesta!";
	char	dest[20];
	unsigned int n = 5;

	ft_strncpy(dest, src, n);
	dest[n] = '\0';

	printf("String: %s\n", dest);
	return 0;
}
