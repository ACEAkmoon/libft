//Функция сравнивает первые num символов строки string1 с первыми num символами строки string2.
//Эта функция начинает сравнивать первый символ каждой строки. Если они равны, 
//strncmp продолжает сравнивать  следующие пары символов, пока не будут найдены 
//различные символы или пока не будет достигнут конец строки.

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int    ft_strncmp(const char *string1, const char *string2, size_t num)
{
    while (*string1 && *string2 && num--)
    {
        if(*string1 != *string2)
            return (*string1 - *string2);
        string1++;
        string2++;
    }
    return (0);
}
/*
void main()
{
  char buffer1[13] = "DWgaOtP12df0";
  char buffer2[13] = "DWGAOTP12DF0";

  int n = ft_strncmp(buffer1, buffer2, 13);

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