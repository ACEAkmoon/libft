//Функция isalnum проверяет параметр сharacter, через который передается 
//целочисленное значение — эквивалент символа, является ли сharacter 
//десятичной цифрой или символом алфавита, прописной или строчной буквой.
//
//Если проверяемый параметр character десятичная цифра или буква верхнего 
//или нижнего регистров, то результат выполнения функции — истина. 
//В противном случае результат — ложь.
//--------------------------------------------------------------------------
//Возвращаемое значение
//Значение, отличное от нуля (т.е. истинно), если аргумент функции — это буква алфавита.
//Ноль (т.е. ложь), в противном случае.

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int	ft_isalnum(int character)
{
  return (ft_isalpha(character) || ft_isdigit(character));
}

/*
void main()
{
  char *string_0 = "C++ t7";
  printf("%s\n", string_0);
  while (*string_0)
  {
    if(ft_isalnum(*string_0))
        printf("\n%c - symbol or number", *string_0);
    else
        printf("\n%c - NOT symbol or number", *string_0);
    string_0++;
  }
  //system("pause"); // Команда задержки экрана
}
*/
