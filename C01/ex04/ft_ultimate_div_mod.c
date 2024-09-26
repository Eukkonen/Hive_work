/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:48:20 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/12 16:19:36 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int main() {
    int a = 42;
    int b = 5;

    printf("Before: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After: a = %d (div), b = %d (mod)\n", a, b);

    return 0;
}
