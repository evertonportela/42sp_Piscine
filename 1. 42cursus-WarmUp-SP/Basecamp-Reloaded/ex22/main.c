/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:10:20 by evportel          #+#    #+#             */
/*   Updated: 2023/04/22 16:10:21 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	x;
	int	y;

	x = -5;
	y = 10;
	printf("O valor de x é: %d\n", x);
	printf("O valor absoluto de x é: %d\n\n", ABS(x));
	printf("O valor de y é: %d\n", y);
	printf("O valor absoluto de y é: %d\n", ABS(y));
	return (0);
}
