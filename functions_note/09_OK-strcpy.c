//Функция копирует Си-строку srcptr, включая завершающий нулевой символ
//в строку назначения, на которую ссылается указатель destptr.
//------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char  *ft_strcpy(char *destptr, const char *srcptr)
{
  char *pointer_destptr;
  
  pointer_destptr = destptr;
  while (*srcptr)
    *destptr++ = *srcptr++;
  *destptr = '\0';
  return (pointer_destptr);
}

/*
void main()
{
  char string_0[40] = "";
  char string_1[39] = "This is a test of the strcpy function";
  char *sum;
  
  printf("%s\n%s", string_0, string_1);
  sum = ft_strcpy(string_0, string_1);
  printf("\n\n%s\n\n", sum);
  //system("pause"); // Команда задержки экрана
}
*/
