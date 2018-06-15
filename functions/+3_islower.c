//Функция проверяет, является ли значение аргумента, передаваемого 
//через параметр сharacter, строчной буквой алфавита.
//-----------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_islower(int character)
{
	return (character >= 'a' && character <= 'z');
}

//"main" reproduse is in "isalpha"
