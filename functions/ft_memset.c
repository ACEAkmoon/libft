/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:25:18 by akrushin          #+#    #+#             */
/*   Updated: 2018/02/19 14:25:32 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memset(void *memptr, char val, size_t num)
{
	size_t	memptr_step;

	memptr_step = 0;
	while (num-- > memptr_step)
		((char*)memptr)[num] = val;
}
