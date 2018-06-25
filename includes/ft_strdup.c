/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 18:00:27 by akrushin          #+#    #+#             */
/*   Updated: 2017/12/27 18:00:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char  *ft_strdup(const char *srcptr)
{
  char *bufer;
  
  bufer = ft_stralloc(srcptr);
  ft_strcpy(bufer, srcptr);
  return (bufer);
}
