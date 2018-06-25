/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:31:33 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:31:35 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char        *ft_itoa(int n)
{
    char    *string;
    char    buffer[22];
    int     i;
    int     ntmp;

    i = 0;
    ntmp = n;
    if (n == -2147483648)
        return ("-2147483648");
    else if (n < 0)
        ntmp = -n;
    while (ntmp > 0)
    {
        buffer[i++] = (ntmp % 10) + 48;
        ntmp /= 10;
    }
    if (n < 0)
        buffer[i++] = '-';
    string = ft_memalloc((size_t)i + 1);
    if (n == 0)
        string[0] = '0';
    while (--i >= 0)
        string[ntmp++] = buffer[i];
    return (string);
}
