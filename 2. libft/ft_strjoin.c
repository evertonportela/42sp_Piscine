/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:40:31 by evportel          #+#    #+#             */
/*   Updated: 2023/05/12 10:21:04 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*newStr;
	size_t	count;
	size_t	index;
	size_t	alocate_src_1;
	size_t	alocate_src_2;

	alocate_src_1 = ft_strlen(s1);
	alocate_src_2 = ft_strlen(s2);
	newStr = (char *) malloc((alocate_src_1 + alocate_src_2 + 1) * sizeof(char));
	count = 0;
	while (count < alocate_src_1)
	{
		newStr[count] = s1[count];
		count++;
	}
	index = 0;
	while (count < (alocate_src_1 + alocate_src_2))
	{
		newStr[count] = s2[index];
		count++;
		index++;
	}
	newStr[count] = '\0';
	return (newStr);
	}

