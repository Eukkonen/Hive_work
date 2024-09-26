/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:10:32 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 17:20:34 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
#include <stdio.h>
int main()

{
	unsigned int nb = 5;
	char src[] ="notmuch";
	char dest[50] ="wadap";

	printf("Combined exampel:%s\n", ft_strncat(dest, src, nb));

return (0);


}

