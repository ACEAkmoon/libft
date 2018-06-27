/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 05:00:37 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 05:00:38 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
    while (*string1 && *string2 && num--)
    {
        if(*string1 != *string2)
            return (*string1 - *string2);
        string1++;
        string2++;
    }
    return (0);
}
