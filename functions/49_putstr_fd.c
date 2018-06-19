//Функция putstr_fd Выводит строку s в дескриптор файла fd.
//-------------------------------------------------------------------------------
//write(1, &c, 1) -> (главный екран, передать в переменную "С", вывести один раз)

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}
