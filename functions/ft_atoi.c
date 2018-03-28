/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:21:32 by akrushin          #+#    #+#             */
/*   Updated: 2017/12/27 19:21:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *string)
{
	int i;
	int negativ;
	int number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((string[i] == ' ') || (string[i] == '\t') || (string[i] == '\n')
	|| (string[i] == '\v') || (string[i] == '\f') || (string[i] == '\r'))
		i++;
	if (string[i] == 45)
		negativ = 1;
	if ((string[i] == 45) || (string[i] == 43))
		i++;
	while (string[i] >= 48 && string[i] <= 57)
	{
		number *= 10;
		number += (string[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}
