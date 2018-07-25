/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:30:32 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:30:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *string1, const char *string2)
{
	while (*string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
	}
	return (*(unsigned char*)string1 - *(unsigned char*)string2);
}

/*int		ft_strcmp(const char *s1, const char *s2)
{
	return (ft_memcmp(s1, s2, (ft_strlen(s2) + 1)));
}*/
