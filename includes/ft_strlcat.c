/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:53:47 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 15:53:49 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcat(char *destptr, char *srcptr, unsigned int size)
{
  unsigned int  nsize;

  nsize = size;
  while (*destptr && nsize > 0 && nsize--)
    destptr++;
  while (*srcptr && nsize > 1 && nsize--)
    *destptr++ = *srcptr++;
  if (nsize == 1)
    *destptr = '\0';
  return (size - nsize);
}
