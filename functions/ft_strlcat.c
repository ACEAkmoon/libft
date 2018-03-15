/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:53:47 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 15:53:49 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *destptr, char *srcptr, unsigned int size)
{
	int				src_step;
	unsigned int	dest_step;

	src_step = 0;
	dest_step = 0;
	while (destptr[dest_step])
		dest_step++;
	while (srcptr[src_step])
	{
		if (dest_step < size - 1)
			destptr[dest_step] = srcptr[src_step];
		dest_step++;
		src_step++;
	}
	destptr[dest_step - 1] = '\0';
	return (dest_step);
}
