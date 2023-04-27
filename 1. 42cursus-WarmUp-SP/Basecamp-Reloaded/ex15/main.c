/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:27:32 by evportel          #+#    #+#             */
/*   Updated: 2023/04/19 15:12:11 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

void	ft_putstr(char *str);

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
	printf("Resultado Esperado: Ever\n");
	ft_putstr("Resultado do Programa: ");
	ft_putstr(str1);
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: (Nao imprimiveis 7, 8, 9, 10)\n");
	ft_putstr("Resultado do Programa: ");
	ft_putstr(str2);
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: \'\\0\'\n");
	ft_putstr("Resultado do Programa: ");
	ft_putstr(str3);
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);
}	
