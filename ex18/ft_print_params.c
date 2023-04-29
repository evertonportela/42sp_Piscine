/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:14:33 by evportel          #+#    #+#             */
/*   Updated: 2023/04/25 15:23:43 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	c_str;
	int	c_arg;

	c_arg = 1;
	while (c_arg < argc)
	{
		c_str = 0;
		while (argv[c_arg][c_str] != '\0')
		{
			ft_putchar(argv[c_arg][c_str]);
			c_str++;
		}
		ft_putchar('\n');
		c_arg++;
	}
	return (0);
}
