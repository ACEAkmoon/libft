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

int	ft_atoi(const char *string)
{
	int i;
	int negativ;
	int number;

	i = 0;
	negativ = 0;
	number = 0;

	// \t - Перемещает позицию печати к следующей позиции горизонтальной табуляции. 
	// \n - Перемещает позицию печати на одну строку вниз.
	// \v - Перемещает позицию печати к следующей позиции вертикальной табуляции.
	// \f - Выбрасывает текущую страницу и начинает печать со следующей.
	// \r - Перемещает позицию печати в крайнее левое положение.

	while ((string[i] == ' ') || (string[i] == '\t') || (string[i] == '\n')
	|| (string[i] == '\v') || (string[i] == '\f') || (string[i] == '\r'))
		i++;
	if (string[i] == '-')
		negativ = 1;
	if ((string[i] == '-') || (string[i] == '+'))
		i++;
	while (string[i] >= '0' && string[i] <= '9')
	{
		number *= 10;
		number += (string[i] - '0');
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}
/*
void main()
{
  char string_0[39] = "-19884627 Good day Bro!";
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