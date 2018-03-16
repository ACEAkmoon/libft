//Функция memcpy копирует num байтов первого блока памяти, на который ссылается указатель srcptr, 
//во второй блок памяти, на который ссылается указатель destptr.
//------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

void    *ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
  while (num--)
    ((char*)destptr)[num] = ((char*)srcptr)[num];
  return (destptr); //Ошибка 1 error C4716: ft_memcpy: должна возвращать значение
}
/*
void main()
{
  char string_0[] = "The memcpy function copies the num bytes of the first memory block";
  char string_1[] = "This is a test of the memset function";
  printf("%s\n%s", string_0, string_1);
  ft_memcpy(string_0, string_1, 10);
  printf("\n\n%s\n\n", string_0);
  //system("pause"); // Команда задержки экрана
}
*/