/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:59:13 by evportel          #+#    #+#             */
/*   Updated: 2023/04/21 15:39:45 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <limits.h>
#include <stdio.h>
#include <time.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int		n;
	int		min;
	int		max;
	int		*array;
	clock_t	start;
	clock_t	end;
	double	tempo;

	n = 0;
	min = -200000;
	max = 200000;


	start = clock();
	array = ft_range(min, max);
	end = clock();
	
	while (n < (max - min))
	{
		printf("%d ", array[n]);
		n++;
	}
	
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

/* ************************************************************** */

	n = 0;
	min = 20;
	max = 20;
	start = clock();
	array = ft_range(min, max);
	end = clock();
	
	while (n < (max - min))
	{
		printf("%d ", array[n]);
		n++;
	}
	
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);
	return (0);
}
