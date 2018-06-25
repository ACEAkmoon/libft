/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:54:41 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:54:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memccpy(void *destptr, void *srcptr, int stop, unsigned int num)
{
    while (num--)
    {
        *(char *)destptr++ = *(char *)srcptr;
        if (*(char *)srcptr++ == (char)stop)
            return ((char *)destptr);
    }
    return (0);
}
