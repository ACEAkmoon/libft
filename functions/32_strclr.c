//Функция strcrl Устанавливает каждый символ строки в значение '\0'
//-------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

void	ft_strcrl(char *s)
{
	while (*s)
		*s++ = '\0';
}

void main () {
	char test[16] = "function strcrl";

	return (ft_strcrl(test));
}
