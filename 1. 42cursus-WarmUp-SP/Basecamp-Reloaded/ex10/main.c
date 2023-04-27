/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:55:36 by evportel          #+#    #+#             */
/*   Updated: 2023/04/18 17:12:12 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	num_a;
	int	num_b;
	int	*pointer_a;
	int	*pointer_b;

	num_a = 544;
	num_b = 12;
	pointer_a = &num_a;
	pointer_b = &num_b;
	printf("%p %d\n", pointer_a, num_a);
	printf("%p %d\n", pointer_b, num_b);
	ft_swap(pointer_a, pointer_b);
	printf("%p %d\n", pointer_a, num_a);
	printf("%p %d\n", pointer_b, num_b);
}	
