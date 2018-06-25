//Функция memset заполняет num байтов блока памяти, через указатель memptr. 
//Код заполняемого символа передаётся в функцию через параметр val
//------------------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

//#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

void  *ft_memset(void *memptr, char val, size_t num)
{
  while(num--)
    ((char*)memptr)[num] = val;
  return (memptr);
}

/*
void main()
{
  char string[] = "This is a test of the memset function";
  printf("%s\n", string);
  ft_memset(string, '*', 25); // заполнить первые N байт символом '*'
  printf("%s\n\n", string);
  //system("pause"); // Команда задержки экрана
}

/////////////////////////////////////////////////////////

#include <stdio.h>

void ft_memset(void *memptr, char val, size_t num) 
{
    char val_1 = val * 0x1010101;
    for (int i = num >> 1; i >= 0; --i)
        ((char*)memptr)[i] = val_1;

    size_t memptr_1 = num & ~3;
    while(num-- >= memptr_1)
        ((char*)memptr)[num] = val;
}
*/