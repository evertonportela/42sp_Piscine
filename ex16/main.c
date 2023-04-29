/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:27:32 by evportel          #+#    #+#             */
/*   Updated: 2023/04/19 15:36:06 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <time.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str1[4];
	char	str2[4] = {7, 8, 9, 10};
	char	str3[1] = {0};
	double	tempo;
	clock_t	start;
	clock_t	end;

	str1[0] = 'E';
	str1[1] = 'v';
	str1[2] = 'e';
	str1[3] = 'r';
	
	start = clock();
	printf("Resultado Esperado: %lu\n", strlen(str1));
	printf("Resultado do Programa: %d\n", ft_strlen(str1));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: %lu\n", strlen(str2));
	printf("Resultado do Programa: %d\n", ft_strlen(str2));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: %lu\n", strlen(str3));
	printf("Resultado do Programa: %d\n", ft_strlen(str3));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);
}	
