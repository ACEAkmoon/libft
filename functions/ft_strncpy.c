/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 00:07:10 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 00:07:11 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strncpy(char *destptr, char *srcptr, unsigned int num)
{
    unsigned int    save_num;

    save_num = num;
    while (num-- && *srcptr)
        *destptr++ = *srcptr++;
    if (num < save_num)
      ft_bzero(destptr, num);
    return (destptr);
}
