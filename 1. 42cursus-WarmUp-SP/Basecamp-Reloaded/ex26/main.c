/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:19:23 by evportel          #+#    #+#             */
/*   Updated: 2023/04/27 15:31:48 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	ft_count_if(char **tab, int (*f)(char*));

int	main(void)
{
	char *example0[] = {"blablabla", "tatat", "777", "hahsdfas", "4123"};
	char *example1[] = {"mussum", "ipsum", "cacilds", "vidis", "litro", "abertis"};
	char *example2[] = {"001", "002", "003", "004", "005", "006", "007", "031"};

	printf("expected: 3, got %i\n", ft_count_if(example0, ft_str_is_alpha));
	printf("expected: 6, got %i\n", ft_count_if(example1, ft_str_is_alpha));
	printf("expected: 4, got %i\n", ft_count_if(example2, ft_str_is_alpha));
}


vetor[5][3] = {a, b, c}, {a, b, c}, {a, b, c}, {a, b, c}, {a, b, c}