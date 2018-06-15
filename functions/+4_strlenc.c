//Функция strlen видит начало Си-строки  и начинает сначала считать количество символов 
//(байтов, отводимых под каждый символ), этот процесс выполняется до тех пор, пока не будет 
//достигнут завершающий нулевой символ или символ передан в качестве аргумента symbol
//-----------------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int   ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    ++i;
  return (i);
}

int	ft_strlenc(const char *str, char symbol)
{
	int i;

	i = 0;
	while (str[i] && str[i] != symbol)
		++i;
	return (i);
}


/*
void main()
{
  char buffer1[13] = "DWgaOtP12df0";

  int n = ft_strlenc(buffer1, "P");
  printf("The number of characters is: '%d'.\n", n);
  //system("pause");
}
*/