//Функция strnew выделяет (char _ malloc) и возвращает «свежую» строку, заканчивающуюся «\0». 
//Каждый символ строки инициализируется в «\0»
//-------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_strnew(size_t size)
{
	return (char *)ft_memalloc(size);
}
