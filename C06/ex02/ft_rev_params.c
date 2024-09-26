/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:32:05 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 09:45:52 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_params(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		ft_putchar (argv[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (i > 1)
	{
		ft_rev_params(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
