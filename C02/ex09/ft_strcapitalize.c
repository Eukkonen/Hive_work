/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:27:20 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/14 16:16:56 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
		{
			str[i] -= 32;
			new_word = 0;
		}
		else if (str[i] >= 'A' && (str[i] <= 'Z' && !new_word))
			str[i] += 32;
		if
		(str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			new_word = 1;
	}
	else
	{
		new_word = 0;
	}
	i++;
}
return str;
}
