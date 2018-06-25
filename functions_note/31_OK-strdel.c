//Функция strdel Принимает в качестве параметра адрес строки, которая должна
//освободиться, затем устанавливает его указатель на NULL.
//-------------------------------------------------------------------
//Функция free освобождает место в памяти

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}