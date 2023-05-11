/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:40:40 by evportel          #+#    #+#             */
/*   Updated: 2023/05/11 14:31:18 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated;
	size_t	SIZE_MAX;
	size_t	totalSize;

	SIZE_MAX = 18446744073709551615UL;
	totalSize = nmemb * size;
	if ((nmemb == 0 && size == 0) || (nmemb == SIZE_MAX && size == SIZE_MAX)){
		return (NULL);
	}
	allocated = (void *) malloc(totalSize);
	if (allocated == NULL)
	{
		return (NULL);
	}
	ft_bzero(allocated, nmemb * size);
	return (allocated);
}
