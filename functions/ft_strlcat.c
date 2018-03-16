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
  while (*destptr && size > 0 && size--)
    destptr++;
  while (*srcptr && size > 1 && size--)
    *destptr++ = *srcptr++;
  if (size == 1)
    *destptr = '\0';
  return (0);
}
