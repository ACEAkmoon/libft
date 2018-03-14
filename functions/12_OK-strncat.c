//Функція додає перші num символів рядка srcptr до кінця рядка destptr, 
//плюс символ кінця рядка.
//---------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

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
/*
void main()
{
  char string_0[99] = "Here we write down our row: ";
  char string_1[39] = "This is a test of the strncat function";
  printf("%s\n%s", string_0, string_1);
  ft_strncat(string_0, string_1, 30);
  printf("\n\n%s\n\n", string_0);
  //system("pause"); // Команда задержки экрана
}
*/
