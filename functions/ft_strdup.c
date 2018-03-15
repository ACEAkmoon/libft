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

//#include "../libft.h"

char	*ft_strdup(const char *srcptr)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	while (srcptr[size])
		size++;
	str = (char*)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = srcptr[i];
		i++;
	}
	str[size] = '\0';
	return (str);
}
