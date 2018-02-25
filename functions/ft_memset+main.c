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

void ft_memset(void *memptr, char val, size_t num) 
{
    size_t memptr_step = 0;
    while(num-- > memptr_step)
        ((char*)memptr)[num] = val;
}

/////////////////////////////////////////////////////////


int main()
{
  char string[] = "This is a test of the memset function";
  printf("%s\n", string);
  ft_memset(string, '*', 25); // заполнить первые N байт символом '*'
  printf("%s", string);
  return 0;
}

/////////////////////////////////////////////////////////

#include <stdio.h>

void ft_memset(void *memptr, char val, size_t num) 
{
    char val_1 = val * 0x1010101;
    for (int i = num >> 1; i >= 0; --i)
        ((char*)memptr)[i] = val_1;

    size_t memptr_1 = num & ~3;
    while(num-- >= memptr_1)
        ((char*)memptr)[num] = val;
}
