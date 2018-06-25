/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:00:08 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 13:00:10 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_memcmp(const void *memptr1, const void *memptr2, unsigned int num)
{
    unsigned char    *ptr1;
    unsigned char    *ptr2;

    ptr1 = (unsigned char *)memptr1;
    ptr2 = (unsigned char *)memptr2;
    while (num--)
    {
        if (*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;
    }
    return (0);
}
