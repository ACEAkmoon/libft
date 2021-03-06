//Функция striter Применяет функцию f к каждому символу переданной строки как аргумент. 
//Каждый символ передается по адресу f при необходимости модифицировано
//-------------------------------------------------------------------------------------
//Функция free освобождает место в памяти

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

//#include <unistd.h>

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}
