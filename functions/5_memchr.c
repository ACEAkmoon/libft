//Функция memchr в num байтах блока памяти, адресуемого указателем memptr, 
//ищет первое вхождение val, и возвращает указатель на найденный символ

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()

void  *ft_memchr(const void *memptr, int val, size_t num)
{
  size_t step = 0;

  while(step < num)
  {
    if(((char*)memptr)[step] == (char)val) 
      return ((char*)memptr + step);
    step++;
  }
  return(0); //Ошибка 1 error C4716: ft_memccpy: должна возвращать значение
}
/*
void main()
{
  char search = ')';
  char *pch;
  char memptr[22] = "***3ve3dni)e Voyni***";
  printf("%s\n", memptr);
  pch = ft_memchr(memptr, search, 22);
  if (pch != NULL)
    printf ("'%c' found at position %d.\n", search, pch-memptr+1);
  else
    printf ("not found '%c'.\n\n", search);
  //system("pause"); // Команда задержки экрана
}



void  *ft_memchr(const void *memptr, int val, size_t num) 
{
  char *bufer;

  bufer = (char*)memptr;
  while (num--) 
  {
    if(*bufer == (char)val) 
      return ((char*)bufer);
    bufer++;
  }
  return (0); //Ошибка 1 error C4716: ft_memccpy: должна возвращать значение
}*/