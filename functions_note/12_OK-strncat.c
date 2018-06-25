//Функція додає перші num символів рядка srcptr до кінця рядка destptr, 
//плюс символ кінця рядка.
//---------------------------------------------------------------------
//место назначения -> destptr = destination 
//источник -> srcptr = source

#include "../libft.h"
//#include "stdafx.h" //Для работы с VS12 C++11
//#include <stdio.h>
//#include <cstdlib>  //Для работы с функцией system("pause")

char    *ft_strncat(char *destptr, char *srcptr, int num)
{
  char bufer[num];
  char *pointer_destptr;
    
  pointer_destptr = destptr;
  //ft_strncpy(bufer, srcptr, num); //Вариант 1: - копируем символы (с заполнением bufer-масива нулями в размере NUM)
  ft_memcpy(bufer, srcptr, num);  //Вариант 2: - копируем байти (бистрее)
  bufer[num] = '\0';
  ft_strcat(destptr, bufer);
  return (pointer_destptr);
}

/*
void main()
{
  char string_0[99] = "Here we write down our row: ";
  char string_1[39] = "This is a test of the strncat function";
  char *sum;

  printf("%s\n%s", string_0, string_1);
  sum = ft_strncat(string_0, string_1, 30);
  printf("\n\n%s\n\n", sum);
  //system("pause"); // Команда задержки экрана
}
*/
