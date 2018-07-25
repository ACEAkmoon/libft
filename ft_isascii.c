/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:57:53 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 15:57:58 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int character)
{
	return (character >= 0 && character <= 127);
}
