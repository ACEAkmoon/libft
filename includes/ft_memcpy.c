/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:53:36 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:53:41 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void *destptr, const void *srcptr, unsigned int num)
{
  while (num--)
    ((char*)destptr)[num] = ((char*)srcptr)[num];
  return (destptr);
}
