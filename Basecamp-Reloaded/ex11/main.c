/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:19:21 by evportel          #+#    #+#             */
/*   Updated: 2023/04/18 17:39:32 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	div;
	int	mod;
	int	*div_point;
	int	*mod_point;

	div_point = &div;
	mod_point = &mod;
	ft_div_mod(28, 6, div_point, mod_point);
	printf("Resultado Esperado para DIV: 4\n");
	printf("%p %d\n", div_point, div);
	printf("Resultado Esperado para MOD: 4\n");
	printf("%p %d\n", mod_point, mod);
}	
