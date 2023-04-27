/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:38:45 by evportel          #+#    #+#             */
/*   Updated: 2023/04/18 16:40:26 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_numbers(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		ft_putchar(alpha);
		alpha++;
	}
}	
