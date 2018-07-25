/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:32:03 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:32:04 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *srcptr, size_t n)
{
	char *bufer;

	if (!(bufer = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	bufer = ft_strncpy(bufer, srcptr, n);
	bufer[n] = '\0';
	return (bufer);
}
