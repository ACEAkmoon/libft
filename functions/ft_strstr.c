/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 02:05:29 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 02:05:31 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

const char	*ft_strstr(const char *string1, char *string2)
{
  char *bufer;
  
  bufer = string2;
  while (*string1)
  {
    while (*string1 == *bufer)
    {
      string1++;
      bufer++;
      if (!*bufer)
        return (string1 - ft_strlen(string2));
    }
    bufer = string2;
    string1++;
  }
  return (0);
}
