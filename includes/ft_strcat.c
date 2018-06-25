/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 13:59:15 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 13:59:16 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strcat(char *destptr, char *srcptr)
{
    char *pointer_destptr;
    
    pointer_destptr = destptr;
    while (*destptr)
        destptr++;
    ft_strcpy(destptr, srcptr);
    return (pointer_destptr);
}
