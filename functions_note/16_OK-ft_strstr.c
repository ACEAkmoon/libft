//Функция ищет первое вхождение подстроки string2 в строке string1. 
//Возвращает указатель на первое вхождение строки string2 в строку string1, 
//или пустой указатель, если строка string2 не является частью строки string1. 
//В данном поиске нуль-символ не  учитывается.
//----------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

const char	*ft_strstr(const char *string1, char *string2)
{
  char *bufer;
  
  bufer = string2;
  while (*string1)
  {
    while (*string1 == *bufer)
    {
    	bufer++;
    	string1++;
    	if (!*bufer)
    		return (string1 - ft_strlen(string2));
    }
    bufer = string2;
    string1++;
  }
  return (0);
}
/*
void main()
{
  char search[6] = "Voyni";
  const char *result; //  2 IntelliSense: значение типа "const char *" нельзя присвоить сущности типа "char *"
  char memptr[22] = "!**3ve3dni)e Voyni*)*";
  printf("%s\n", memptr);
  result = ft_strstr(memptr, search);
  if (result != NULL)
    printf ("'%s' found at position: %s.\n", search, result);
  else
    printf ("not found '%s'.\n\n", search);
  //system("pause"); // Команда задержки экрана
}
*/
