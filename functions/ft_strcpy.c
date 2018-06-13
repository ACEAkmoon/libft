/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 23:54:09 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/31 23:54:12 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strcpy(char *destptr, const char *srcptr)
{
  char *pointer_destptr;
  
  pointer_destptr = destptr;
  while (*srcptr)
    *destptr++ = *srcptr++;
  *destptr = '\0';
  return (pointer_destptr);
}
