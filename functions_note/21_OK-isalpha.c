//Функция isalpha проверяет аргумент, передаваемый через параметр сharacter, 
//является ли он строчной или прописной буквой алфавита.
//--------------------------------------------------------------------------
//Возвращаемое значение
//Значение, отличное от нуля (т.е. истинно), если аргумент функции — это буква алфавита.
//Ноль (т.е. ложь), в противном случае.

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int	ft_isalpha(int character)
{
	return (ft_isupper(character) || ft_islower(character));
}

/*
void main()
{
  char *string_0 = "C++ t";
  printf("%s\n", string_0);
  while (*string_0)
  {
    if(ft_isalpha(*string_0))
        printf("\n%c - symbol", *string_0);
    else
        printf("\n%c - NOT symbol", *string_0);
    string_0++;
  }
  //system("pause"); // Команда задержки экрана
}
*/
