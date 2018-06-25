/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:25:57 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:25:58 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strtrim(char const *s)
{
    char            *str;
    char            *pointer_str;

    str = ft_stralloc(s);
    pointer_str = str;
    if (str)
    {
        while (*s)
        {
            if (*s != ' ' && *s != '\n' && *s != '\t')
                *str++ = *s;
            s++;
        }
        *str = '\0';
    }
    return (pointer_str);
}
