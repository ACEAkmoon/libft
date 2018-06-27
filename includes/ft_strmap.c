/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:18:33 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:18:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	size_t			i;

	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(s[i]);
		new[i] = '\0';
	}
	return (new);
}
