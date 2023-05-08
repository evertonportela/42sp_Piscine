/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:12:04 by evportel          #+#    #+#             */
/*   Updated: 2023/05/08 10:30:52 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned long int	end;
	unsigned long int	count;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	end = ft_strlen(dest);
	count = 0;
	while (count < (size) && dest[count] != '\0')
	{
		dest[end + count] = src[count];
		count++;
	}
	dest[end + count] = '\0';
	return (ft_strlen(src));
}
