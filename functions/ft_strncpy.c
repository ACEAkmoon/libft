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
	unsigned int	step;

	step = 0;
	while (step < num && srcptr[step])
	{
		destptr[step] = srcptr[step];
		step++;
	}
	while (step < num)
	{
		destptr[step] = '\0';
		step++;
	}
	return (destptr);
}
