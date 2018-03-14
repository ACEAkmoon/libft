//Функция bzero() устанавливает первые memptr байт области, начинающейся с num, в ноль (байты, содержащие '\0'))

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include "libft.h"
//#include <cstdlib>  //Для работы с функцией system()

void	ft_bzero(void *memptr, size_t num)
{
	ft_memset(memptr, 0, num);
}
/*
void main()
{
  char string[] = "This is a test of the memset function";
  ft_bzero(string, 25); // заполнить первые N байт символом 'NULL'
  printf("%s\n\n", string);
  //system("pause"); // Команда задержки экрана
}
*/