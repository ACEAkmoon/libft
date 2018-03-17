//Функция strchr выполняет поиск первого вхождения символа symbol в строку string. 
//Возвращает указатель на первое вхождение символа в строке. 
//Завершающий нулевой символ считается частью Си-строки. 
//Таким образом, он также может быть найден для получения указателя на конец строки.
//----------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

const char  *ft_strchr(const char *string, int symbol)
{
  while (*string)
  {
    if (*string == symbol)
      return (string);
    string++;
  }
  return (0);
}
/*
void main()
{
  char search = ')';
  const char *result; //  2 IntelliSense: значение типа "const char *" нельзя присвоить сущности типа "char *"
  char memptr[22] = "!**3ve3dni)e Voyni***";
  printf("%s\n", memptr);
  result = ft_strchr(memptr, search);
  if (result != NULL)
    printf ("'%c' found at position %d.\n", search, result-memptr+1);
  else
    printf ("not found '%c'.\n\n", search);
  //system("pause"); // Команда задержки экрана
}
*/
