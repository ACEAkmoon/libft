/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:21:31 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:21:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	return (!ft_strcmp(s1, s2));
}