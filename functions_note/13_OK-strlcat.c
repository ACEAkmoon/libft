//strlcat — безопасная замена стандартной функции strcat. Копирования содержимого 
//нуль-терминированной строки в буфер ограниченного размера с защитой от переполнения буфера.
//Возвращает сумму входных строк
//-------------------------------------------------------------------------------------------
//strcat  — Об'єднання рядків. Функція додає копію рядка srcptr в кінець рядка destptr.
//-------------------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <string.h> //Для strlcat()
//#include <cstdlib>  //Для работы с функцией system("pause")

unsigned int    ft_strlcat(char *destptr, char *srcptr, unsigned int size)
{
  unsigned int  nsize;

  nsize = size;
  while (*destptr && nsize > 0 && nsize--)
    destptr++;
  while (*srcptr && nsize > 1 && nsize--)
    *destptr++ = *srcptr++;
  if (nsize == 1)
    *destptr = '\0';
  return (size - nsize);
}

/*
void main()
{
  char string_0[99] = "Here we write down our row: ";
  char string_1[39] = "This is a test of the strncat function";
  int sum;
  
  printf("%s\n%s", string_0, string_1);
  sum = ft_strlcat(string_0, string_1, 50);
  printf("\n\n%s\n%d\n\n", string_0, sum);
  //system("pause"); // Команда задержки экрана
}
*/
