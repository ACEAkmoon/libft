//Функция isdigit проверяет аргумент, передаваемый через параметр сharacter, 
//является ли он десятичной цифрой.
//------------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_isdigit(int character)
{
	return (character >= '0' && character <= '9');
}