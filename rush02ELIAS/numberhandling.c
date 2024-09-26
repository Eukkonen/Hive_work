/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numberhandling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukkonen <eukkonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:44:20 by eukkonen          #+#    #+#             */
/*   Updated: 2024/09/24 09:43:48 by eukkonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

/*
long ft_atoi(char *str) // string to number
{
	long num = 0;
	int sign = 1;


	while (*str == ' ') {// Handle leading whitespaces
		str++;
	}

	// Handle optional sign
	if (*str == '-') {
		sign = -1;
		str++;
	} else if (*str == '+') {
		str++;
	}


	while (*str >= '0' && *str <= '9') {// Convert string to number
		// Check for overflow
        if (num > (LONG_MAX - (*str - '0')) / 10) {

			return (sign == 1) ? LONG_MAX : LONG_MIN;// Handle overflow, return LONG_MAX or LONG_MIN
		}

		num = num * 10 + (*str - '0');
		str++;
	}

	return num * sign;
}*/
void ft_putstr(char *str) // write string
{
	while (*str)
		write(1, str++, 1);
}



void write_number(long number) {
	if (number < 0) {
		write_char('-');
		number = -number;
	}

	if (number == 0) {
		write_char('0');
		return;
	}

	char buffer[20];
	int i = 0;

	while (number > 0) {
		buffer[i++] = (number % 10) + '0'; // dividing number to get last digit and store in buffer turns in to asc
		number /= 10;
	}

	for (int j = i - 1; j >= 0; j--) { // pinting from buffer
		write_char(buffer[j]);
		}
}


void convert_to_words(long number) {// Function to convert a number to words
	if (number == 0) {
		ft_putstr("zero");
		return;
	}

	if (number >= 1000000) {
		write_number(number / 1000000);
		ft_putstr(" million ");
		number %= 1000000;
	}

	if (number >= 1000) {
		write_number(number / 1000);
		ft_putstr(" thousand ");
		number %= 1000;
	}

	if (number > 0) {
		write_number(number);
	}
}
