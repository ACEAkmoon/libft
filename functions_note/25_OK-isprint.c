//Функция isprint проверяет значение аргумента, передаваемого через параметр сharacter, 
//представляет ли оно собой печатный символ. Печатными символами являются все символы, 
//кроме управляющих символов.
//-------------------------------------------------------------------------------------

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

int	ft_isprint(int character)
{
	return (character >= 0x20 && character <= 0x7E);
}
