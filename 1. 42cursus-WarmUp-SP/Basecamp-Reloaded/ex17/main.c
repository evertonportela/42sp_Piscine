/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:27:32 by evportel          #+#    #+#             */
/*   Updated: 2023/04/19 15:58:52 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <time.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[10] = "Everton";
	char	str2[10] = "Everton";
	char	str3[10] = "42sp";
	char	str4[10] = "2sp";
	char	str5[10] = "2sp";
	char	str6[10] = "42sp";
	double	tempo;
	clock_t	start;
	clock_t	end;

	
	start = clock();
	printf("Resultado Esperado: %d\n", strcmp(str1, str2));
	printf("Resultado do Programa: %d\n", ft_strcmp(str1, str2));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: %d\n", strcmp(str3, str4));
	printf("Resultado do Programa: %d\n", ft_strcmp(str3, str4));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);

	start = clock();
	printf("Resultado Esperado: %d\n", strcmp(str5, str6));
	printf("Resultado do Programa: %d\n", ft_strcmp(str5, str6));
	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("\nTempo de execução: %fs\n\n", tempo);
}	
