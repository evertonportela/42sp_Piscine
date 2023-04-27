/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:55:36 by evportel          #+#    #+#             */
/*   Updated: 2023/04/18 17:02:21 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	num;
	int	*pointer;

	num = 544;
	pointer = &num;
	printf("%p %d\n", pointer, num);
	ft_ft(pointer);
	printf("%p %d\n", pointer, num);
}	
