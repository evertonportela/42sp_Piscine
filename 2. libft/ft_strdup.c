/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:43:56 by evportel          #+#    #+#             */
/*   Updated: 2023/05/11 15:43:41 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*newStr;
	unsigned int	lenght;

	lenght = ft_strlen(str);
	newStr = ft_calloc(lenght + 1, sizeof(const char));
	if (newStr == NULL)
	{
		return (NULL);
	}
	newStr = ft_memcpy(newStr, str, lenght);
	return (newStr);
}