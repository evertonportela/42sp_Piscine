/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:16:12 by evportel          #+#    #+#             */
/*   Updated: 2023/04/21 15:40:26 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	subtraction;
	int	count;
	int	*array;

	count = 0;
	if (min >= max)
	{
		return (array = NULL);
	}
	else
	{
		subtraction = max - min;
	}
	array = malloc(((subtraction)) * sizeof(int));
	while (count < (subtraction))
	{
		array[count] = min;
		min++;
		count++;
	}
	return (array);
}
