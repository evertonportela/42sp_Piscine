/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:35:33 by evportel          #+#    #+#             */
/*   Updated: 2023/05/11 16:12:59 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*initial;

	initial = s;
	index = ft_strlen(s);
	s = (s + index);
	c = (unsigned char) c;
	while (*s != *initial && c != *s)
	{
		s--;
	}
	if (c == *s)
		return ((char *)s);
	return (NULL);
}
