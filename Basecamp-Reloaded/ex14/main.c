/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:48:01 by evportel          #+#    #+#             */
/*   Updated: 2023/04/19 13:49:32 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <limits.h>

int ft_sqrt(int nb);

int	main(void)
{
	clock_t	start;
	clock_t	end;
	double	tempo;

	start = clock();
	printf("SQRT -25, Resultado Esperado: 0\n");
	printf("SQRT -25, Resultado do Programa: %d\n", ft_sqrt(-25));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("SQRT 0, Resultado Esperado: 0\n");
	printf("SQRT 0, Resultado do Programa: %d\n", ft_sqrt(0));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("SQRT 25, Resultado Esperado: 5\n");
	printf("SQRT 25, Resultado do Programa: %d\n", ft_sqrt(25));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("SQRT 25, Resultado Esperado: 5\n");
	printf("SQRT 25, Resultado do Programa: %d\n", ft_sqrt(INT_MAX));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Tempo de execução: %fs\n\n", tempo);

	printf("%d", INT_MAX);
}