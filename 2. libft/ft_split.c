/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evportel <evportel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:15:10 by evportel          #+#    #+#             */
/*   Updated: 2023/05/12 19:04:01 by evportel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
void    ft_split(char const *s, char c)
{
  char *head;
  char *end;

  while (*s)
  {
      while (*s == c)
      {
        head = (char*)s;
        s++;
      }
      while (*s != c)
      {
        end = (char*)s;
        s++;
      }
      if (*s == c)
      {
        end = (char *)s;
        printf("s", head);
        printf("s", end);
      }
  }
}