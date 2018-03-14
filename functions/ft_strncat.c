/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:38:34 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 15:38:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *destptr, char *srcptr, int num)
{
	int	src_step;
	int	dest_step;

	src_step = 0;
	dest_step = 0;
	while (destptr[dest_step])
		dest_step++;
	while (srcptr[src_step] && src_step < num)
	{
		destptr[dest_step] = srcptr[src_step];
		dest_step++;
		src_step++;
	}
	destptr[dest_step] = '\0';
	return (destptr);
}
