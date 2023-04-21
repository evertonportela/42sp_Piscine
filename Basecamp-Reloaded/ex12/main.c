/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:49:52 by evportel          #+#    #+#             */
/*   Updated: 2023/04/19 09:08:51 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	clock_t	start;
	clock_t	end;
	double	tempo;


	start = clock();
	printf("-2! -> Resultado esperado: 0\n");
	printf("-2! -> Resultado do programa: %d\n", ft_iterative_factorial(-2));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("0! -> Resultado esperado: 1\n");
	printf("0! -> Resultado do programa: %d\n", ft_iterative_factorial(0));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("7! -> Resultado esperado: 5040\n");
	printf("7! -> Resultado do programa: %d\n", ft_iterative_factorial(7));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("14! -> Resultado esperado: 0\n");
	printf("14! -> Resultado do programa: %d\n", ft_iterative_factorial(14));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

}
