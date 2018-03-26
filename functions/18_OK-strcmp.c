//Функция сравнивает символы двух строк, string1 и string2. Начиная с первых символов 
//функция strcmp сравнивает поочередно каждую пару символов, и продолжается это до тех пор, 
//пока не будут найдены различные символы или не будет достигнут конец строки.
//Возвращаемое значение 0 если блоки равны, и значение отличное от 0, если  блоки не равны.
//-----------------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int	ft_strcmp(const char *string1, const char *string2)
{
	while (*string1 && *string2 && *string1 == *string2)
	{
		string1++;
		string2++;
	}
	return (*(char*)string1 - *(char*)string2);
}
/*
void main()
{
  char buffer1[13] = "DWgaOtP12df0";
  char buffer2[13] = "DWGAOTP12DF0";

  int n = ft_memcmp(buffer1, buffer2, 13);

  if(n == 0)
    printf("'%s' is the == as '%s'.\n", buffer1, buffer2);
  else if(n > 0)
    printf("'%s' is > than '%s'.\n", buffer1, buffer2);
  else if(n < 0)
    printf("'%s' is < than '%s'.\n", buffer1, buffer2);
  else
    printf("ERROR FUNCTION");
  //system("pause");
}
*/
