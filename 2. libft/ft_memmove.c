/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:12:04 by evportel          #+#    #+#             */
/*   Updated: 2023/05/03 18:31:43 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*c;
	unsigned long int	length;

	length = 0;
	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}
	while (length < n)
	{
		((unsigned char *) c)[length] = ((unsigned char *) src)[length];
		length++;
	}
	length = 0;
	while (length < n)
	{
		((unsigned char *) dest)[length] = ((unsigned char *) c)[length];
		length++;
	}
	return (dest);
}
