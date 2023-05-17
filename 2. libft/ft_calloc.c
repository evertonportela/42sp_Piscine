/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:40:40 by evportel          #+#    #+#             */
/*   Updated: 2023/05/16 19:42:08 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated;
	size_t	total_size;

	total_size = nmemb * size;
	if ((nmemb == 0 && size == 0) || (nmemb < 0 && size < 0))
		return (allocated = malloc(total_size));
	if (nmemb != 0 && (total_size / nmemb) != size)
	// if ((nmemb == 0 && size != 0) || 
	// 	(nmemb != 0 && size == 0) || 
	// 	(total_size / nmemb != size))
		return (NULL);
	allocated = malloc(total_size);
	if (allocated != NULL)
	{
		ft_bzero(allocated, nmemb * size);
	}
	return (allocated);
}


// {
// 	void	*allocated;
// 	size_t	size_max;
// 	size_t	total_size;

// 	size_max = 18446744073709551615UL;
// 	total_size = nmemb * size;
// 	if ((nmemb == 0 && size == 0) || (nmemb == size_max && size == size_max))
// 	{
// 		return (NULL);
// 	}
// 	allocated = (void *) malloc(total_size);
// 	if (allocated == NULL)
// 	{
// 		return (NULL);
// 	}
// 	ft_bzero(allocated, nmemb * size);
// 	return (allocated);
// }

