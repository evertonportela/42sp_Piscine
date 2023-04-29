/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:59:13 by evportel          #+#    #+#             */
/*   Updated: 2023/04/21 11:47:12 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	origin[] = "Moulinette";
	char	*dup_lib_orig;
	char	*dup_ft_strdup;

	dup_ft_strdup = ft_strdup(origin);
	dup_lib_orig = strdup(origin);
	printf("String Original: %s\n\n", origin);
	printf("Resultado esperado: %s\n", dup_lib_orig);
	printf("Resultado do programa: %s", dup_ft_strdup);
	return (0);
}
