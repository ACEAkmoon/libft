/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:07:22 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 13:07:25 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

const char    *ft_strnstr(const char *string1, char *string2, size_t num)
{
  char *bufer;
  
  bufer = string2;
  while (*string1 && num != 0)
  {
    while (*string1 == *bufer && num--)
    {
        bufer++;
        string1++;
        if (!*bufer)
            return (string1 - ft_strlen(string2));
    }
    bufer = string2;
    string1++;
    num--;
  }
  return (0);
}
