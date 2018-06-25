/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:21:32 by akrushin          #+#    #+#             */
/*   Updated: 2017/12/27 19:21:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int    ft_atoi(const char *string)
{
    int negativ;
    int result;

    negativ = 1;
    result = 0;
    while (ft_isspace(*string))
        string++;
    if (*string == '-')
        negativ = -1;
    if (*string == '-' || *string == '+')
        string++;
    while (ft_isdigit(*string))
    {
        result = result * 10 + (*string - 48);
        string++;
    }
    return (result * negativ);
}
