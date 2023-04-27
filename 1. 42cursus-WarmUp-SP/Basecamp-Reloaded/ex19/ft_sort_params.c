/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:14:33 by evportel          #+#    #+#             */
/*   Updated: 2023/04/20 17:22:12 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
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
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}

//	clear && gcc -Wall -Wextra -Werror *  && ./a.out c b a C B A 3 2 1