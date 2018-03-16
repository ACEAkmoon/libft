//Функция StrAlloc выделяет память для строки
//------------------------------------------------------------------------------

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

char	*ft_stralloc(const char *str)
{
	return (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
}