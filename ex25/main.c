/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:36:46 by evportel          #+#    #+#             */
/*   Updated: 2023/04/23 18:55:55 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int nb);

int	main(void)
{
	int	vet[5] = {0,1,2,3,4};
	int	length = sizeof(vet) / sizeof(vet[0]);

	ft_foreach(vet, length, ft_putnbr);
	return (0);
}
