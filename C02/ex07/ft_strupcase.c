/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:55:39 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/12 12:06:25 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && (str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
