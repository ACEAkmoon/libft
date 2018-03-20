//Функция ищет последнее вхождение символа symbol в строку string. 
//Возвращает указатель на последнее вхождение символа в строке string. 
//Завершающий нулевой символ считается частью строки. 
//Таким образом, он также может быть найден для получения указателя на конец строки.
//----------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

const char  *ft_strrchr(const char *string, int symbol)
{
  int size;
  
  size = ft_strlen(string);
  while (size--)
    if (string[size] == symbol)
      return (string + size);
  return (0);
}
/*
void main()
{
  char search = ')';
  const char *result; //  2 IntelliSense: значение типа "const char *" нельзя присвоить сущности типа "char *"
  char memptr[22] = "!**3ve3dni)e Voyni*)*";
  printf("%s\n", memptr);
  result = ft_strchr(memptr, search);
  if (result != NULL)
    printf ("'%c' found at position: %d.\n", search, result-memptr+1);
  else
    printf ("not found '%c'.\n\n", search);
  //system("pause"); // Команда задержки экрана
}
*/
