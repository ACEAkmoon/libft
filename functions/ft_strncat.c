/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:38:34 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 15:38:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strncat(char *destptr, char *srcptr, int num)
{
  char bufer[num];
  ft_strncpy(bufer, srcptr, num);
  bufer[num] = '\0';
  ft_strcat(destptr, bufer);
  return (0);
}
