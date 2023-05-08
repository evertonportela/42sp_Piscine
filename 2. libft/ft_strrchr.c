/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:35:33 by evportel          #+#    #+#             */
/*   Updated: 2023/05/08 10:32:36 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	c = c + 0;
	return ((char *)s);
}


// int	index;
// 	int	ultimate;

// 	index = 0;
// 	ultimate = -1;
// 	if (s[index] == 0)
// 		return ((char *)s);
// 	while (s[index])
// 	{
// 		if (s[index] == (unsigned char)c)
// 			ultimate = index;
// 		else if (s[index + 1] == (unsigned char)c)
// 			ultimate = index + 1;
// 		index++;
// 	}
// 	if (ultimate != -1)
// 		return ((char *)s + ultimate);
// 	else
// 		return (NULL);