/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 00:07:10 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 00:07:11 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *destptr, char *srcptr, unsigned int num)
{
	unsigned int	symbol;

	symbol = 0;
	while (symbol < num && srcptr[symbol])
	{
		destptr[symbol] = srcptr[symbol];
		symbol++;
	}
	while (symbol < num)
	{
		destptr[symbol] = '\0';
		symbol++;
	}
	return (destptr);
}
