/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:56:41 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:56:43 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void  *ft_memmove(void *destptr, const void *srcptr, size_t num)
{
  char bufer[num];
  ft_memcpy(bufer, srcptr, num);
  ft_memcpy(destptr, bufer, num);
  return (destptr);
}
