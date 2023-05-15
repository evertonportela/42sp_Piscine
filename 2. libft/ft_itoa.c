/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:12:04 by evportel          #+#    #+#             */
/*   Updated: 2023/05/15 14:52:56 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(size_t number)
{
	size_t	digit;

	if (number == 0)
		return (1);
	if (number < 0)
		number *= -1;
	digit = 0;
	while (number > 0)
	{
		digit++;
		number = number / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	unsigned int	len_digits;
	unsigned int	is_negative;
	long int		number;
	char			*string_digit;

	is_negative = 0;
	number = n;
	if (number < 0)
	{
		number = number * (-1);
		is_negative = 1;
	}
	len_digits = count_digit(number);
	string_digit = (char *) malloc((len_digits + is_negative) + 1);
	string_digit[len_digits + is_negative] = '\0';
	while (len_digits > 0)
	{
		len_digits--;
		string_digit[len_digits + is_negative] = number % 10 + '0';
		number = number / 10;
		if (is_negative == 1 && len_digits == 0)
			string_digit[len_digits] = '-';
	}
	return (string_digit);
}
