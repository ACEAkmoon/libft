/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 23:54:09 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/31 23:54:12 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *destptr, char *srcptr)
{
	int	symbol;

	symbol = 0;
	while (srcptr[symbol])
	{
		destptr[symbol] = srcptr[symbol];
		symbol++;
	}
	destptr[symbol] = srcptr[symbol];
	return (destptr);
}
