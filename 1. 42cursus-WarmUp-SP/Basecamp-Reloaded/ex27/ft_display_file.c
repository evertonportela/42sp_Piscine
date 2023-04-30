/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:54:14 by evportel          #+#    #+#             */
/*   Updated: 2023/04/28 17:04:25 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_display_file(char *filename)
{
	int		file;
	char	charactere;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		return ;
	}
	while (read(file, &charactere, sizeof(charactere)))
	{
		ft_putchar(charactere);
	}
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
