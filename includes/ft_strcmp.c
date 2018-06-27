/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 04:23:13 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 04:23:16 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *string1, const char *string2)
{
	while (*string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
	}
	return (*(unsigned char*)string1 - *(unsigned char*)string2);
}
