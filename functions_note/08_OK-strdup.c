//Функция strdup дублирует строку, на которую указывает аргумент str. 
//Память под дубликат строки выделяется с помощью функции malloc, 
//и по окончанию работы с дубликатом должна быть очищена с помощью функции free.
//---------------------------------------------------------------------------------------------------
//Функция malloc выделяет блок памяти, размером sizemem байт, и возвращает указатель на начало блока.
//Содержание выделенного блока памяти не инициализируется, оно остается с неопределенными значениями.

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdlib.h>   // Для free or malloc
//#include <string.h>   // Для strdup
//#include <malloc.h>   // Для malloc
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char  *ft_strdup(const char *srcptr)
{
  char *bufer;
  
  bufer = ft_stralloc(srcptr);
  ft_strcpy(bufer, srcptr);
  return (bufer);
}
/*
void main()
{
  char buffer1[13] = "DWgaOtP12df0";

  char *s = ft_strdup(buffer1);
  printf("The duplicate string is: '%s'.\n\n", s);
  //free (s); // Очищаем память, выделенную под дубликат
  //system("pause");
}
*/