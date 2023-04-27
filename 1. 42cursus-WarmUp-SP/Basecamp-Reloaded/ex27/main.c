/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:55:08 by evportel          #+#    #+#             */
/*   Updated: 2023/04/27 13:23:44 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display_file(char *filename);

int	main(int argc, char **argv)
{
	int	count_string;
	int	count_arg;

	count_arg = 1;
	while (count_arg < argc)
	{
		count_string = 0;
		while (argv[count_arg][count_string] != '\0')
		{
			ft_putchar(argv[count_arg][count_string]);
			count_string++;
		}
		ft_display_file(argv[count_arg]);
		//ft_putchar('\n');
		count_arg++;
	}
	return (0);
}


//https://github.com/Eywek/42-piscine/blob/master/day12/ex00/srcs/display_file.c
