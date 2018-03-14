//Функция копирует Си-строку srcptr, включая завершающий нулевой символ
//в строку назначения, на которую ссылается указатель destptr.
//------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char  *ft_strcpy(char *destptr, char *srcptr)
{
  int symbol;

  symbol = 0;
  while (srcptr[symbol])
  {
    destptr[symbol] = srcptr[symbol];
    symbol++;
  }
  destptr[symbol] = srcptr[symbol]; //обезательно нужно для избежания ошибок при неинициализированом размере строки 'destptr'
  return (destptr);
}
/*
void main()
{
  char string_0[] = "";
  char string_1[38] = "This is a test of the strcpy function";
  printf("%s\n%s", string_0, string_1);
  ft_strcpy(string_0, string_1);
  printf("\n\n%s\n\n", string_0);
  //system("pause"); // Команда задержки экрана
}
*/