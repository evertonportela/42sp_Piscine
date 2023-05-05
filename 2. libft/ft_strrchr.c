/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:35:33 by evportel          #+#    #+#             */
/*   Updated: 2023/05/05 15:49:49 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	ultimate;
	
	index = 0;
	ultimate = -1;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
		{
			ultimate = index;
		}
		else if (s[index + 1] == (unsigned char)c)
		{
			ultimate = index + 1;
		}
		index++;
	}
	if (ultimate != -1)
	{
		return ((char *)s + ultimate);
	}
	else
	{
		return (NULL);
	}
	
}
