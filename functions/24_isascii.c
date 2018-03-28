//Функция isascii проверяет аргумент, передаваемый через параметр сharacter, 
//относиться ли он к таблице ASCII.
//------------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_isascii(int character)
{
	return (character >= 0 && character <= 127);
}
