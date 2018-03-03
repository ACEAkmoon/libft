//Функция strdup дублирует строку, на которую указывает аргумент str. 
//Память под дубликат строки выделяется с помощью функции malloc, 
//и по окончанию работы с дубликатом должна быть очищена с помощью функции free.

#include "../libft.h"
//#include <stdlib.h>   // Для free
//#include <string.h>   // Для strdup
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char  *ft_strdup(char *src)
{
  int   i;
  int   size;
  char  *str;

  i = 0;
  size = 0;
  while (src[size])
    size++;
  str = (char*)malloc(sizeof(*str) * (size));
  if (str == NULL)
    return (NULL);
  while (i < size)
  {
    str[i] = src[i];
    i++;
  }
  str[size] = '\0';
  return (str);
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