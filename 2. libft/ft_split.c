/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:15:10 by evportel          #+#    #+#             */
/*   Updated: 2023/05/13 20:05:18 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int    sum_word;
	int    word;

	sum_word = 0;
	word = 0;
	while (*str != '\0')
	{
		if (*str != c && word == 0)
		{
			word = 1;
			sum_word++;
		}
		if (*str == c)
		{
			word = 0;
		}
		str++;
	}
	return (sum_word);
}

static char    *constructor_word(const char *start, const char *finish)
{
	char			*ptr;
	char			*new_word;
	unsigned int	count;

	ptr = (char *) start;
	count = 0;
	while (*start != '\0' && ptr != finish)
	{
		count++;
		ptr++;
	}
	new_word = (char *)malloc(count + 1 * sizeof(char));
	new_word[count] = '\0';
	while (count-- != 0)
	{
		new_word[count] = start[count];
	}
	return (new_word);
}

char    **ft_split(char const *s, char c)
{
	char	**split;
	char	*start;
	int		word;
	int		index;

	split = (char **)malloc(count_words(s, c) * sizeof(char));
	word = 0;
	index = 0;
	while (*s != '\0')
	{
		if(*s != c && word == 0)
		{
			start = (char *)s;
			word = 1;
		}
		if(*s == c && word == 1)
		{
			split[index] = constructor_word(start, s);
			word = 0;
			index++;
		}
		s++;
	}
	// printf("%s", split);
	return (split);
}
