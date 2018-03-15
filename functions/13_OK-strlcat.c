//strlcat — безопасная замена стандартной функции strcat.
//strcat  — Об'єднання рядків. Функція додає копію рядка srcptr в кінець рядка destptr.
//-------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

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
	destptr[dest_step] = '\0';
	return (dest_step);
}
/*
void main()
{
  char string_0[99] = "Here we write down our row: ";
  char string_1[39] = "This is a test of the strncat function";
  printf("%s\n%s", string_0, string_1);
  ft_strlcat(string_0, string_1, 99);
  printf("\n\n%s\n\n", string_0);
  //system("pause"); // Команда задержки экрана
}
*/
