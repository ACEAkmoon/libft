//Функция memccpy копирует данные из массива (области памяти), на который указывает аргумент source, 
//в массив (область памяти), на который указывает аргумент destination пока не встретится символ, 
//код которого соответствует указанному в аргументе "stop" или пока не будет скопировано N байт данных. 
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system()
//#include <string.h> //?! Для работы с функцией memccpy() or VS12 C++11

void    *ft_memccpy(void *destptr, const void *srcptr, int stop, size_t num)
{
  size_t step = 0;

  while(step < num)
  {
    ((char*)destptr)[step] = ((char*)srcptr)[step];
    if(((char*)srcptr)[step] == (char)stop) 
    {
      ((char*)destptr)[step] = ((char*)srcptr)[step];
      return (0);
    }
    step++;
  } 
  return (0); //Ошибка 1 error C4716: ft_memccpy: должна возвращать значение
}
/*
void main()
{
  bool test_0 = true;
  bool test_1 = true;

  if(test_0) {
    char destptr[30] = "";
    char srcptr[] = "1234567890";
    ft_memccpy(destptr, srcptr, '5', 30);
    printf("%s\n%s\n\n", srcptr, destptr);
  }
  if(test_1) {
    char destptr[31] = "";
    char srcptr[31] = "This is the string:-not copied";
    ft_memccpy(destptr, srcptr, ':', 30);
    printf("%s\n%s\n\n", srcptr, destptr);
  }
  //system("pause"); // Команда задержки экрана
}
*/