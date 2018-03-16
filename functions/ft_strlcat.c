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
  unsigned int step;
  
  step = size;
  while (*destptr && step > 0 && step--)
    destptr++;
  while (*srcptr && step > 1 && step--)
    *destptr++ = *srcptr++;
  if (step == 1)
    *destptr = '\0';
  return (0);
}
