//Функция atoi преобразует строку string в целое значение типа int. 
//Анализируя строку string, atoi интерпретирует её содержание, 
//как целое число, которое возвращается как int.
//
//Функция сначала отбрасывает символы пробелов до тех пор, 
//пока не будет найден символ отличный от нуля. Затем, начиная с этого символа, 
//функция принимает необязательный начальный знак плюс или минус. После чего, 
//следует  последовательность цифр, которая интерпретируется в числовое значение.

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

int    ft_atoi(const char *string)
{
    int negativ;
    int result;

    negativ = 1;
    result = 0;
    while (ft_isspace(*string))
        string++;
    if (*string == '-')
        negativ = -1;
    if (*string == '-' || *string == '+')
        string++;
    while (ft_isdigit(*string))
    {
        result = result * 10 + (*string - 48);
        string++;
    }
    return (result * negativ);
}
/*
void main()
{
  char string_0[39] = " -19884627 Good day Bro!";
  printf("%s\n", string_0);
  int in = ft_atoi(string_0);
  printf("\n\n%d\n\n", in);
  //system("pause"); // Команда задержки экрана
}
*/

/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>
 
int main()
{
  char input [256];
  std::cout << "in number: ";
  std::cin >> input;
 
  int value = atoi(input);
  std::cout << "number is - " << value << ", double numbers = " << (value * 2) << "\n";
  system("pause");
  return 0;
}*/