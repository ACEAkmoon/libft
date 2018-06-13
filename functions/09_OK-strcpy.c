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
  while (*srcptr)
    *destptr++ = *srcptr++;
  *destptr = '\0';
  return (destptr);
}

/*
void main()
{
  char string_0[7] = "Drive ";
  char string_1[9] = "Delorean";
  char *sum;
  
  printf("%s\n%s", string_0, string_1);
  sum = ft_strjoin(string_0, string_1);
  printf("\n\n%s\n\n", sum);
  //system("pause"); // Команда задержки экрана
}
*/